#include "libft.h"

int	ft_isalnum(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	test_char;

// 	test_char = '3';
// 	if (ft_isalnum(test_char))
// 	{
// 		printf("%cは英数字ンゴね\n", test_char);
// 	}
// 	else
// 	{
// 		printf("%c は英数字ではないンゴね\n", test_char);
// 	}
// 	return (0);
// }
