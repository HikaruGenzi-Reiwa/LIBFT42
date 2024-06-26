#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char test_char = 127;
// 	if (ft_isascii(test_char))
// 		printf("%c ASCII文字ンゴね\n", test_char);
// 	else
// 		printf("%c ASCCI文字じゃないンゴね\n", test_char);
// 	return (0);
// }