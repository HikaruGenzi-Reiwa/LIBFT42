#include "libft.h"
// #include <stdio.h>

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}
// #include <stdio.h>

// int main(void)
// {
//     char testChar = 'a';
//     printf("Is '%c' alphabetic? %s\n", testChar, ft_isalpha(testChar) ? "Yes" : "No");

//     testChar = '1';
//     printf("Is '%c' alphabetic? %s\n", testChar, ft_isalpha(testChar) ? "Yes" : "No");

//     return 0;
// }
