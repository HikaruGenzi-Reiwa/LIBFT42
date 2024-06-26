#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] && s2[i]) && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		else
			i++;
	}
	if (i == n)
		return (0);
	else
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		else
			return (0);
	}
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		l_needle;
	const char	*s_needle;
	const char	*s_haystack;
	(void) s_haystack;
	s_needle = needle;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*needle != '\0')
		needle++;
	l_needle = needle - s_needle;
	if (len < l_needle)
		return (NULL);
	s_haystack = haystack;
	while (*haystack != '\0' && len >= l_needle)
	{
		if (*haystack == *s_needle && ft_strncmp(haystack, s_needle,
				l_needle) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
//     const char *haystack = "This is a test string";
//     const char *needle = "test";
//     size_t len = 16;
//     char *result = ft_strnstr(haystack, needle, len);
//     if(result != NULL)
//         printf("Found at index: %ld\n", result - haystack);
//     else
//         printf("Not found\n");
//     return(0);
// }