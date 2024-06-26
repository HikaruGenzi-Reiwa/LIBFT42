#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     char test_char = 3;
//     if(ft_isdigit(test_char))
//     {
//         printf("%cは数字ンゴね\n", test_char);
//     }
//     else
//     {
//         printf("%c は数字ではないンゴね\n", test_char);
//     }
//     return(0);
// }