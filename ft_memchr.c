#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p = s;
	unsigned char		value;
	size_t				i;

	value = c;
	i = 0;
	while (i < n)
	{
		if (p[i] == value)
		{
			return (void *)(p + i);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[] = "Hello, world!";
// 	char *ptr = memchr(str, ',', sizeof(str));

// 	if(ptr != NULL)
// 	{
// 		printf("Found ',' at position: %ld\n", ptr - str);
// 	}
// 	else
// 	{
// 		printf("Character not found.\n");
// 	}

// 	ptr = ft_memchr(str, ',', sizeof(str));
// 	if(ptr != NULL)
// 	{
// 		printf("Found ',' at position: %ld\n", ptr - str);
// 	}
// 	else{
// 		printf("Charscter not found.\n");
// 	}

// 	return (0);
// }