#include "libft.h"

intcount_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] && s[i - 1] == c)
		words++;
		i++;
	}
		return (words);
}

char *ft_strncpy(char *dest, char const *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char **copy_alloc(const char *s, int words, char **arr, char c)
{
	int i;
	int len;
	char const *index;

	i = 0;
	while (i < words)
	{
		len = 0;
		while (*s == c)
		s++;
		index = s; // start of the new word;
		while (*s != c && *s != 0)
		{
			s++;
			len++;
		}
		arr[i] = malloc (sizeof(char) * (len + 1));
		ft_strncpy(arr[i], index, len);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char**ft_split(char const *s, char c)
{
	char **arr;
	char const *index;
	int	words;
	int i;
	int len;

	i = 0;
	words = count_words(s, c);
	arr = malloc (sizeof(char *) * (words + 1));
	arr = copy_alloc(s, words, arr, c);
	return (arr);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
char str[] = "X one two three ";
char **arr = ft_split(str, ' ');
int i = 0;
while (arr[i])
{
printf("%s\n", arr[i]);
i++;
}

return 0;
}
... (1 line left)
