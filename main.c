#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>
#include <assert.h>
#include <stdint.h>

void	testIs();
void	testMemset();
void	testBzero();
void	testMemcpy();
void	testMemmove();
void	testStrlcpy();
void	testStrlcat();
void	testStrchr();
void	testStrrchr();
void	testStrncmp();
void	testMemchr();
void	testMemcmp();
void	testStrnstr();
void	testAtoi();
void	testMalloc();
void	testStrdup();

void	testSubStr();
void	testStrjoin();
void	teststrtrim();
void	testSplit();
void	testItoi();
void	testStrmapi();
void	testStriteri();
void	testPutchar_fd();
void	testPutstr_fd();
void	testPutendl_fd();
void	testPutnbr_fd();

void	testLstnew();
void	testLstadd_front();
void	testLstsize();
void	testLstlast();
void	testLstadd_back();

int	main(void)
{
	char	*teststrlen = "teststrlen";
	testIs();
	printf("%s = strlen: %lu\n\n", teststrlen, ft_strlen(teststrlen));
	testMemset();
	testBzero();
	testMemcpy();
	testMemmove();
	testStrlcpy();
	testStrlcat();
	printf("toupper = %c\n\n", ft_toupper('c'));
	printf("tolower = %c\n\n", ft_tolower('C'));
	testStrchr();
	testStrrchr();
	testStrncmp();
	testMemchr();
	testMemcmp();
	testStrnstr();
	testAtoi();
	testMalloc();
	testStrdup();

	testSubStr();
	testStrjoin();
	teststrtrim();
	testSplit();
	testItoi();
	testStrmapi();
	testStriteri();
	testPutchar_fd();
	testPutstr_fd();
	testPutendl_fd();
	testPutnbr_fd();

	testLstnew();
	testLstadd_front();
	testLstsize();
	testLstlast();
	testLstadd_back();
}

void	testIs()
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

void	testMemset()
{
	char	testmemset[] = "testmemset";
	char	testmemset2[] = "testmemset";
	ft_memset(testmemset, '*', 5);
	printf("ft_memset = %s\n", testmemset);
	memset(testmemset2, '*', 5);
	printf("memset = %s\n", testmemset2);
	printf("\n");
}

void	testBzero()
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

void	testMemcpy()
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

void	testMemmove()
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

void	testStrlcpy()
{
	size_t size = 10;
	char	strlcpyDest[] = "strlcpyDest";
	char	strlcpySrc[] = "strlcpySrc";
	printf("ft_strlcpy = %zu \n", ft_strlcpy(strlcpyDest, strlcpySrc, size));
	printf("strlcpy = %zu \n\n", strlcpy(strlcpyDest, strlcpySrc, size));

	char src[] = "coucou";
	char dest[10]; 
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

void	testStrlcat()
{
	size_t size = 14;
	char	strlcatDest[] = "strlcatDest";
	char	strlcatSrc[] = "strlcatSrc";
	char	strlcatDest2[] = "strlcatDest";
	char	strlcatSrc2[] = "strlcatSrc";
	printf("ft_strlcat = %zu \n", ft_strlcat(strlcatDest, strlcatSrc, size));
	printf("strlcat = %zu \n\n", strlcat(strlcatDest2, strlcatSrc2, size));
}

void	testStrchr()
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

void	testStrrchr()
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

void	testStrncmp()
{
	size_t	n = 4;
	printf("ft_strncmp = %d\n", ft_strncmp("test", "t", n));
	printf("strncmp = %d\n\n", strncmp("test", "t", n));
}

void	testMemchr()
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

void	testMemcmp()
{
	size_t	sizememcmp = 4;
	printf("ft_memcmp = %d\n", ft_memcmp("test", "t", sizememcmp));
	printf("memcmp = %d\n\n", memcmp("test", "t", sizememcmp));
}

void	testStrnstr()
{
	const	char *big = "hello world";
	const	char *little = "lo";
	size_t	sizestrnstr = -1;
	printf("ft_strnstr = %s \n", ft_strnstr(big, little, sizestrnstr));
	printf("strnstr = %s \n\n", strnstr(big, little, sizestrnstr));
}

void	testAtoi()
{
	char	*str = "\t\n\r\v1474899999999999\n\t\v\f\r+101";
	printf("resultat ft_atoi = %d\n", ft_atoi(str));
	printf("resultat atoi = %d\n\n", atoi(str));
}

void	testMalloc()
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

void	testStrdup()
{
	const char	*original = "Hello World.";
	char		*copy = ft_strdup(original);

	printf( "testStrdup original = %s\n", original );
 	printf( "testStrdup copy = %s\n\n", copy);
	free( copy );
}

void	testSubStr()
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

void	testStrjoin()
{
	char *s1 = "Hello, ";
	char *s2 = "World!";
	char *result = ft_strjoin(s1, s2);
	printf("strjoin s1 = %s, s2 = %s res= %s\n\n", s1, s2, result);
	free(result);
}

void	teststrtrim()
{
	char	*s1 = "   Hello, World!  ";
	char	*set = " ";
	char	*result = ft_strtrim(s1, set);
	printf("strtrim s1 = %s, set = \"%s\" res= %s\n\n", s1, set, result);
	free(result);
}

void	testSplit()
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

void	testItoi()
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

void	testStrmapi()
{
	char	*s1 = "Hello, World!";
	char	*result = ft_strmapi(s1, ft_toupper_test);
	printf("testStrmapi : s1 = %s, result = %s\n\n", s1, result);
	free(result);
}

void	ft_tolower_test(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'A' && *c <= 'Z')
		*c = ft_tolower(*c);
}

void	testStriteri()
{
	char	*s1 = "Hello, World!";
	char	*s2 = ft_strdup(s1);
	ft_striteri(s2, ft_tolower_test);
	printf("testStriteri : s1 = %s, result = %s\n\n", s1, s2);
	free(s2);
}

void	testPutchar_fd()
{
	printf("test ft_putchar_fd :\n");
	char	c = 'c';
	ft_putchar_fd(c, 1);
	printf("\n\n");
}

void	testPutstr_fd()
{
	printf("test ft_putstr_fd :\n");
	char	c[] = "ft_putstr_fd";
	ft_putstr_fd(c, 1);
	printf("\n\n");
}

void	testPutendl_fd()
{
	printf("test ft_putendl_fd :\n");
	char	c[] = "ft_putendl_fd";
	ft_putendl_fd(c, 1);
	printf("\n");
}

void	testPutnbr_fd()
{
	printf("test ft_putnbr_fd :\n");
	int	nb = -2147483648;
	ft_putnbr_fd(nb, 1);
	printf("\n\n");
}

void	testLstnew()
{
	char *content = "Hello, World!";
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

void	testLstadd_front()
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
}

void	testLstsize()
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
}

void	testLstlast()
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

void	testLstadd_back()
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
}

//cc -Wall -Wextra -Werror  *.c -lbsd