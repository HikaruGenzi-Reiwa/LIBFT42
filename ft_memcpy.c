#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*cdest;
	const char	*csrc = (const char *)src;

	cdest = (char *)dst;
	while (n)
	{
		*cdest++ = *csrc++;
		n--;
	}
	return(dst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char src[] = "Hello, World!";
// 	char dest[20];

// 	ft_memcpy(dest, src, sizeof(src));

// 	printf("Copied string: %s\n", dest);

// 	return (0);
// }