#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*p;
	unsigned char	value;

	p = buf;
	value = (unsigned char)ch;
	while (n > 0)
	{
		*p = value;
		p++;
		n--;
	}
	return (buf);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[20] = "Hello, world!";

// 	printf("Before ft_memset: %s\n", str);
// 	// ft_memset 関数を使用して、str の先頭から 5 バイト分を 'x' で埋める
// 	ft_memset(str, 'x', 5);
// 	printf("After ft_memset: %s\n", str);
// 	return (0);
// }
