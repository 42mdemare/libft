#include "libft.h"
#include <stdlib.h>

static size_t	ft_word_count(char const *s, char c)
{
	size_t	count;
	size_t	in_substring;

	count = 0;
	in_substring = 0;
	while (*s)
	{
		if (*s != c && in_substring == 0)
		{
			in_substring = 1;
			count++;
		}
		else if (*s == c)
			in_substring = 0;
		s++;
	}
	return (count);
}

static char	*ft_word_dup(const char *s, size_t start, size_t finish)
{
	char	*word;
	size_t	i;

	word = (char *)malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		start;
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start == -1)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start != -1)
		{
			split[j++] = ft_word_dup(s, start, i);
			start = -1;
		}
		i++;
	}
	split[j] = NULL;
	return (split);
}
