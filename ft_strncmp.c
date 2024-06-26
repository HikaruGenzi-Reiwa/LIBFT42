#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
	{
		if (s1[i] || s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int main(void) 
// {
//     char str1[] = "Hello, world!";
//     char str2[] = "Hello, there!";
//     int n = 11;

//     int result = strncmp(str1, str2, n);

//     if (result == 0)
//     {
//         printf("The first %d characters of the strings are equal.\n", n);
//     }
//     else if (result < 0)
//     {
//         printf("The first %d characters of the first string are lexicographically less than the first %d characters of the second string.\n", n, n);
//     }
//     else
//     {
//         printf("The first %d characters of the first string are lexicographically greater than the first %d characters of the second string.\n", n, n);
//     }
    
//     result = ft_strncmp(str1, str2, n);

//     if (result == 0)
//     {
//         printf("The first %d characters of the strings are equal.\n", n);
//     }
//     else if (result < 0)
//     {
//         printf("The first %d characters of the first string are lexicographically less than the first %d characters of the second string.\n", n, n);
//     }
//     else
//     {
//         printf("The first %d characters of the first string are lexicographically greater than the first %d characters of the second string.\n", n, n);
//     }
    

//     return 0;
// }