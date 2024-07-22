#include "libft.h"

int	is_space(char s)
{
	if (('\t' <= s && s <= '\t') || s == ' ')
		return (1);
	return (0);
}

int	is_nbr(char n)
{
	if ('0' <= n && n <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			pm;
	long	re;

	i = 0;
	pm = 1;
	re = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pm *= -1;
		i++;
	}
	while (is_nbr(str[i]))
	{
		re *= 10;
		re = re + str[i] - '0';
		if (re > LONG_MAX && pm == 1)
			return ((int)re);
		else if (re * pm < LONG_MIN && pm == -1)
			return ((int)re*-1);
		i++;
	}
	re = re * pm;
	return ((int)re);
}

// // 27 28 29 30 31 36 37
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	const char *tests[] = 
// 	{
// 		"42",
//         "   -42",
//         "4193 Hello World!",
//         "Word is 987",
//         "-91283472332",
//         "2147483647",
//         "-2147483648",
//         "+123",
//         "   +0",
//         "   000123",
//         "\t\n\r\f\v 456",
//         "9999999999",
//         "-9999999999",
//         NULL
// 	};
// 	for(int i = 0; tests[i] != NULL; i++)
// 	{
// 		int std_result = atoi(tests[i]);
// 		int ft_result = ft_atoi(tests[i]);
// 		printf("Input: \"%s\"\n", tests[i]);
// 		printf("   atoi: %d\n", std_result);
// 		printf("ft_atoi: %d\n", ft_result);
// 		printf("--------------------------\n");
		
// 	}
// 	return(0);
// }
