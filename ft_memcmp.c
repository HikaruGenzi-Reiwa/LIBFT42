#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char *str1 = "Hello";
// 	const char *str2 = "World";
// 	const char *str3 = "Hello";
// 	int result1 = ft_memcpm(str1, str2, strlen(str1));
// 	int result2 = ft_memcpm(str1, str3, strlen(str1));
// 	printf("Comparison Result (str1 vs str2): %d\n", result1);
// 	printf("Comparison Result (str1 vs str3): %d\n", result2);
// 	result1 = memcmp(str1, str2, strlen(str1));
// 	result2 = memcmp(str1, str3, strlen(str1));
// 	printf("Comparison Result (str1 vs str2): %d\n", result1);
// 	printf("Comparison result (str1 vs str3): %d\n", result2);
// 	return (0);
// }