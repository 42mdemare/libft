/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdemare <mdemare@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 09:49:28 by mdemare           #+#    #+#             */
/*   Updated: 2024/10/21 12:14:49 by mdemare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <assert.h>
#include <stdint.h>

void	testis(void);
void	testmemset(void);
void	testbzero(void);
void	testmemcpy(void);
void	testmemmove(void);
void	teststrlcpy(void);
void	teststrlcat(void);
void	teststrchr(void);
void	teststrrchr(void);
void	teststrncmp(void);
void	testmemchr(void);
void	testmemcmp(void);
void	teststrnstr(void);
void	testatoi(void);
void	testmalloc(void);
void	teststrdup(void);

void	testsubstr(void);
void	teststrjoin(void);
void	teststrtrim(void);
void	testsplit(void);
void	testitoi(void);
void	teststrmapi(void);
void	teststriteri(void);
void	testputchar_fd(void);
void	testputstr_fd(void);
void	testputendl_fd(void);
void	testputnbr_fd(void);

void	testlstnew(void);
void	testlstadd_front(void);
void	testlstsize(void);
void	testlstlast(void);
void	testlstadd_back(void);
void	testlstdelone(void);
void	testlstclear(void);
void	testlstiter(void);
// void	testlstmap(void);

int	main(void)
{
	char	*teststrlen = "teststrlen";
	
	testis();
	printf("%s = strlen: %lu\n\n", teststrlen, ft_strlen(teststrlen));
	testmemset();
	testbzero();
	testmemcpy();
	testmemmove();
	teststrlcpy();
	teststrlcat();
	printf("toupper = %c\n\n", ft_toupper('c'));
	printf("tolower = %c\n\n", ft_tolower('C'));
	teststrchr();
	teststrrchr();
	teststrncmp();
	testmemchr();
	testmemcmp();
	teststrnstr();
	testatoi();
	testmalloc();
	teststrdup();
/* supp */
	testsubstr();
	teststrjoin();
	teststrtrim();
	testsplit();
	testitoi();
	teststrmapi();
	teststriteri();
	testputchar_fd();
	testputstr_fd();
	testputendl_fd();
	testputnbr_fd();
/* bonus */
	testlstnew();
	testlstadd_front();
	testlstsize();
	testlstlast();
	testlstadd_back();
	testlstdelone();
	testlstclear();
	testlstiter();
	// testlstmap();
}

void	testis(void)
{
	int		alpha = 'a';
	int		num = '1';
	int		alnum = 'b';
	int		ascii = 'c';
	int		print = 'd';

	if (ft_isalpha(alpha))
		printf("%c %s", alpha, "is alpha\n\n");
	else
		printf("%c %s", alpha, "no alpha\n\n");
	if (ft_isdigit(num))
		printf("%c %s", num, "is digit\n\n");
	else
		printf("%c %s", num, "no digit\n\n");
	if (ft_isalnum(alnum))
		printf("%c %s", alnum, "is alnum\n\n");
	else
		printf("%c %s", alnum, "no alnum\n\n");
	if (ft_isascii(ascii))
		printf("%c %s", ascii, "is ascii\n\n");
	else
		printf("%c %s", ascii, "no ascii\n\n");
	if (ft_isprint(print))
		printf("%c %s", print, "is print\n\n");
	else
		printf("%c %s", print, "no print\n\n");
}

void	testmemset(void)
{
	char	testmemset[] = "testmemset";
	char	testmemset2[] = "testmemset";
	
	ft_memset(testmemset, '*', 5);
	printf("ft_memset = %s\n", testmemset);
	memset(testmemset2, '*', 5);
	printf("memset = %s\n", testmemset2);
	printf("\n");
}

void	testbzero(void)
{	printf("ft_bzero before = ");
	int testbzero[10]   = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
	int	pos = 0;
	
	while (pos < 10)
	{
		printf("%d: %d ", (pos + 1), testbzero[pos]);
		pos++;
	}
	bzero(testbzero, (6 * sizeof(int)));
	printf("\nft_bzero after = ");
	pos = 0;
	while (pos < 10)
	{
		printf("%d: %d ", (pos + 1), testbzero[pos]);
		pos++;
	}
	printf("\n\n");
}

void	testmemcpy(void)
{
	char	memcpyDest[] = "Hello World";
	char	*memcpySrc = "Yoooo";
	char	memcpyDest2[] = "Hello World";
	char	*memcpySrc2 = "Yoooo";
	size_t size = 5;
	char *result = ft_memcpy(memcpyDest, memcpySrc, size);
	char *result2 = memcpy(memcpyDest2, memcpySrc2, size);
	
	printf("ft_memcpy = %s \n", result);
	printf("memcpy = %s \n\n", result2);
}

void	testmemmove(void)
{
	size_t size = 10;
	char	memmoveDest[] = "memmoveDest";
	char	memmoveSrc[] = "memmoveSrc";
	char	memmoveDest2[] = "memmoveDest";
	char	memmoveSrc2[] = "memmoveSrc";
	
	ft_memmove(memmoveDest, memmoveSrc, size);
	printf("ft_memmove = %s \n", memmoveDest);
	memmove(memmoveDest2, memmoveSrc2, size);
	printf("memmove = %s \n\n", memmoveDest);
}

void	teststrlcpy(void)
{
	size_t size = 10;
	char	strlcpyDest[] = "strlcpyDest";
	char	strlcpySrc[] = "strlcpySrc";
	char src[] = "coucou";
	char dest[10];

	printf("ft_strlcpy = %zu \n", ft_strlcpy(strlcpyDest, strlcpySrc, size));
	printf("strlcpy = %zu \n\n", strlcpy(strlcpyDest, strlcpySrc, size));

	memset(dest, 'A', 10);
	printf("dest = %s", dest);
	printf("ft_strlcpy2 = %zu , len = %lu, dest[0] = %c\n",
	 	ft_strlcpy(dest, src, 0), strlen(src), dest[0]);

	printf("strlcpy2 = %zu , len = %lu, dest[0] = %c\n",
		strlcpy(dest, src, 0), strlen(src), dest[0]);

	printf("ft_strlcpy3 = %zu , len = %lu, dest[0] = %c dest[1] = %c\n", 
		ft_strlcpy(dest, src, 1), strlen(src), dest[0], dest[1]);

	printf("strlcpy3 = %zu , len = %lu, dest[0] = %c dest[1] = %c\n\n", 
		strlcpy(dest, src, 1), strlen(src), dest[0], dest[1]);
}

void	teststrlcat(void)
{
	size_t size = 14;
	char	strlcatDest[] = "strlcatDest";
	char	strlcatSrc[] = "strlcatSrc";
	char	strlcatDest2[] = "strlcatDest";
	char	strlcatSrc2[] = "strlcatSrc";
	
	printf("ft_strlcat = %zu \n", ft_strlcat(strlcatDest, strlcatSrc, size));
	printf("strlcat = %zu \n\n", strlcat(strlcatDest2, strlcatSrc2, size));
}

void	teststrchr(void)
{
	const	char *strstrchr = "test";
	char	cstrchr = 't';
	char	*resultstrchr = ft_strchr(strstrchr, cstrchr);
	char	*resultstrchr2 = ft_strchr(strstrchr, cstrchr);
	
	printf("ft_strchr = char : %c first pos: %ld in : %s\n", 
		cstrchr, resultstrchr - strstrchr, strstrchr);

	printf("ft_strchr = %s\n", resultstrchr);

	printf("strchr = char : %c first pos: %ld in : %s\n", 
		cstrchr, resultstrchr2 - strstrchr, strstrchr);
	printf("strchr = %s\n\n", resultstrchr2);
}

void	teststrrchr(void)
{
	const	char *strstrrchr = "test";
	char	cstrrchr = 't';
	char	*resultstrrchr = ft_strrchr(strstrrchr, cstrrchr);
	char	*resultstrrchr2 = ft_strrchr(strstrrchr, cstrrchr);
	
	printf("ft_strrchr = char : %c last pos: %ld in : %s\n", 
		cstrrchr, resultstrrchr - strstrrchr, strstrrchr);

	printf("ft_strrchr = %s\n", resultstrrchr);

	printf("strrchr = char : %c last pos: %ld in : %s\n",
		cstrrchr, resultstrrchr2 - strstrrchr, strstrrchr);
	printf("strrchr = %s\n\n", resultstrrchr2);
}

void	teststrncmp(void)
{
	size_t	n = 4;
	printf("ft_strncmp = %d\n", ft_strncmp("test", "t", n));
	printf("strncmp = %d\n\n", strncmp("test", "t", n));
}

void	testmemchr(void)
{
	const	char *strmemchr = "test";
	int	intmemchr = 'e';
	size_t	sizememchr = 4;
	char	*resultmemchr = ft_memchr(strmemchr, intmemchr, sizememchr);
	
	printf("ft_memchr = char : %c first pos: %ld in : %s\n", 
		intmemchr, resultmemchr - strmemchr, strmemchr);

	printf("ft_memchr = %p\n",ft_memchr(strmemchr, intmemchr, sizememchr));
	printf("memchr = %p\n\n",memchr(strmemchr, intmemchr, sizememchr));
}

void	testmemcmp(void)
{
	size_t	sizememcmp = 4;
	printf("ft_memcmp = %d\n", ft_memcmp("test", "t", sizememcmp));
	printf("memcmp = %d\n\n", memcmp("test", "t", sizememcmp));
}

void	teststrnstr(void)
{
	const	char *big = "hello world";
	const	char *little = "lo";
	
	size_t	sizestrnstr = -1;
	printf("ft_strnstr = %s \n", ft_strnstr(big, little, sizestrnstr));
	printf("strnstr = %s \n\n", strnstr(big, little, sizestrnstr));
}

void	testatoi(void)
{
	char	*str = "\t\n\r\v1474899999999999\n\t\v\f\r+101";
	printf("resultat ft_atoi = %d\n", ft_atoi(str));
	printf("resultat atoi = %d\n\n", atoi(str));
}

void	testmalloc(void)
{
	int	i;
	int	*pointer;

	pointer = (int *) calloc(12, sizeof(int));
	i = 0;
	assert(pointer != NULL);
	while (i < 12 - 1)
	{
		pointer[i] = i;
		i++;
	}
	i = 0;
	printf("test malloc : ");
	while (i < 12)
	{
		printf("%d ", pointer[i]);
		i++;
	}
	printf("\n\n");
	free(pointer);
}

void	teststrdup(void)
{
	const char	*original = "Hello World.";
	char		*copy = ft_strdup(original);

	printf( "teststrdup original = %s\n", original );
 	printf( "teststrdup copy = %s\n\n", copy);
	free( copy );
}

void	testsubstr(void)
{
	char *str = "Hello, World!";
	char *result;

	result = ft_substr(str, 7, 5);
	if (result)
	{
		printf("Test 1 (World): %s\n", result);
		free(result);
	}
	else
		printf("Test 1: Error or insufficient memory\n");

	result = ft_substr(str, 20, 5);
	if (result)
	{
		printf("Test 2 (empty): '%s'\n", result);
		free(result);
	}
	else
		printf("Test 2: Error or insufficient memory\n");

	result = ft_substr(str, 0, 20);
	if (result)
	{
		printf("Test 3 (Hello, World!): %s\n", result);
		free(result);
	}
	else
		printf("Test 3: Error or insufficient memory\n");

	result = ft_substr(NULL, 0, 5);
	if (!result)
		printf("Test 4: NULL input string test OK\n\n");
	else
	{
		printf("Test 4: Error\n\n");
		free(result);
	}
}

void	teststrjoin(void)
{
	char *s1 = "Hello, ";
	char *s2 = "World!";
	char *result = ft_strjoin(s1, s2);
	
	printf("strjoin s1 = %s, s2 = %s res= %s\n\n", s1, s2, result);
	free(result);
}

void	teststrtrim(void)
{
	char	*s1 = "   Hello, World!  ";
	char	*set = " ";
	char	*result = ft_strtrim(s1, set);
	
	printf("strtrim s1 = %s, set = \"%s\" res= %s\n\n", s1, set, result);
	free(result);
}

void	testsplit(void)
{
	char	**result;
	char	str[] = "hello,world,this,is,a,test";
	int		i;

	result = ft_split(str, ',');
	if (!result)
		printf("Memory allocation failed.\n");
	i = 0;
	while (result[i])
	{
		printf("Word %d: %s\n", i + 1, result[i]);
		i++;
	}
	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);
	printf("\n");

	i = 0;
	char str2[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit."
	 			  "Sed non risus. Suspendisse lectus tortor, dignissim sit"
				  " amet, adipiscing nec, ultricies sed, dolor. Cras"
				  " elementum ultricies diam. Maecenas ligula massa,"
				  " varius a, semper congue, euismod non, "
               	  "mi.";
	char	**result2 = ft_split(str2, 'i');
	if (!result2)
	{
		printf("NULL");
	}
	else
	{
		while (result2[i] != NULL)
		{
			printf("%s", result2[i]);
			printf("\n");
			i++;
		}
	}
	i = 0;
	while (result2[i])
		free(result2[i++]);
	free(result2);
	printf("\n");

}

void	testitoi(void)
{
	int		n = -1505;
	char	*result = ft_itoa(n);
	
	printf("n = %d, result = %s\n\n", n, result);
	free(result);
}

char	ft_toupper_test(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

void	teststrmapi(void)
{
	char	*s1 = "Hello, World!";
	char	*result = ft_strmapi(s1, ft_toupper_test);
	
	printf("teststrmapi : s1 = %s, result = %s\n\n", s1, result);
	free(result);
}

void	ft_tolower_test(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'A' && *c <= 'Z')
		*c = ft_tolower(*c);
}

void	teststriteri(void)
{
	char	*s1 = "Hello, World!";
	char	*s2 = ft_strdup(s1);
	
	ft_striteri(s2, ft_tolower_test);
	printf("teststriteri : s1 = %s, result = %s\n\n", s1, s2);
	free(s2);
}

void	testputchar_fd(void)
{
	printf("test ft_putchar_fd :\n");
	char	c = 'c';
	ft_putchar_fd(c, 1);
	printf("\n\n");
}

void	testputstr_fd(void)
{
	printf("test ft_putstr_fd :\n");
	char	c[] = "ft_putstr_fd";
	ft_putstr_fd(c, 1);
	printf("\n\n");
}

void	testputendl_fd(void)
{
	printf("test ft_putendl_fd :\n");
	char	c[] = "ft_putendl_fd";
	ft_putendl_fd(c, 1);
	printf("\n");
}

void	testputnbr_fd(void)
{
	printf("test ft_putnbr_fd :\n");
	int	nb = -2147483648;
	ft_putnbr_fd(nb, 1);
	printf("\n\n");
}

void	testlstnew(void)
{
	char	*content = "Hello, World!";
	t_list *node;

	node = ft_lstnew(content);
	printf("test ft_lstnew :\n");
	if (node == NULL)
		printf("Error: Node creation failed\n");
	if (node->content == content)
		printf("Content is correct: %s\n", (char *)node->content);
	else
		printf("Error: Content is incorrect\n");
	if (node->next == NULL)
		printf("Next pointer is NULL as expected\n");
	else
		printf("Error: Next pointer is not NULL\n");
	free(node);
	printf("\n");
}

void	testlstadd_front(void)
{
	t_list	*list;
	t_list	*new_elem;

	printf("test ft_lstadd_front :\n");
	list = NULL;
	new_elem = ft_lstnew("First element");
	ft_lstadd_front(&list, new_elem);
	if (list == new_elem)
		printf("OK: Element added at the front\n");
	else
		printf("Error: Element not added correctly\n");
	free(new_elem);
	printf("\n");
}

void	testlstsize(void)
{
	t_list	*list;
	int		size;
	t_list	*new_elem;
	t_list	*new_elem2;

	printf("test ft_lstsize :\n");
	list = NULL;
	new_elem = ft_lstnew("Elem 1");
	new_elem2 = ft_lstnew("Elem 2");
	ft_lstadd_front(&list, new_elem);
	ft_lstadd_front(&list, new_elem2);
	size = ft_lstsize(list);
	if (size == 2)
		printf("OK: Size is correct\n");
	else
		printf("Error: Size is incorrect\n");
	free(new_elem);
	free(new_elem2);
	printf("\n");
}

void	testlstlast(void)
{
	t_list	*list;
	t_list	*last;

	printf("test ft_lstlast :\n");
	list = ft_lstnew("Elem 1");
	ft_lstadd_front(&list, ft_lstnew("Elem 2"));
	last = ft_lstlast(list);
	if (last && ft_strncmp(last->content, "Elem 1", 8) == 0)
		printf("OK: Last element is correct\n");
	else
		printf("Error: Last element is incorrect\n");
	free(list);
	free(last);
}

void	testlstadd_back(void)
{
	t_list	*list;
	t_list	*new_elem;

	printf("test ft_lstadd_back :\n");
	list = ft_lstnew("Elem 1");
	new_elem = ft_lstnew("Last element");
	ft_lstadd_back(&list, new_elem);
	if (ft_lstlast(list) == new_elem)
		printf("OK: Element added at the back\n");
	else
		printf("Error: Element not added correctly\n");
	free(list);
	free(new_elem);
	printf("\n");
}

void	testlstdelone(void)
{
	t_list	*node = malloc(sizeof(t_list));
	
	if (node)
	{
		node->content = malloc(10 * sizeof(char));
		if (!node->content)
		{
			free(node);
		}
		ft_lstdelone(node, free);
	}
}

void	testlstclear(void)
{
	t_list	*lst;
	t_list	*new_elem;
	char	*str;

	lst = NULL;
	str = strdup("first");
	new_elem = ft_lstnew(str);
	ft_lstadd_back(&lst, new_elem);

	str = strdup("second");
	new_elem = ft_lstnew(str);
	ft_lstadd_back(&lst, new_elem);

	ft_lstclear(&lst, free);

	if (lst == NULL)
		printf("testlstclear: OK\n");
	else
		printf("testlstclear: KO\n");
	printf("\n");
}


void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

void	testlstiter(void)
{
	t_list	*elem1 = ft_lstnew("Hello");
	t_list	*elem2 = ft_lstnew("World");
	t_list	*elem3 = ft_lstnew("42");

	elem1->next = elem2;
	elem2->next = elem3;

	ft_lstiter(elem1, print_content);

	free(elem1);
	free(elem2);
	free(elem3);
}


void	*add_suffix(void *content)
{
	char	*new_str;
	char	*suffix = "_suffix";

	new_str = malloc(strlen(content) + strlen(suffix) + 1);
	if (!new_str)
		return (NULL);
	strcpy(new_str, (char *)content);
	strcat(new_str, suffix);
	return (new_str);
}

void	testlstmap(void)
{
	t_list	*elem1 = ft_lstnew(strdup("hello"));
	t_list	*elem2 = ft_lstnew(strdup("world"));
	t_list	*elem3 = ft_lstnew(strdup("42"));

	elem1->next = elem2;
	elem2->next = elem3;

	t_list	*new_list = ft_lstmap(elem1, &add_suffix, &free);
	t_list	*tmp = new_list;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	free(new_list);
	ft_lstclear(&elem1, &free);
}
//cc -g -Wall -Wextra -Werror  *.c -lbsd