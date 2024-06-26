#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 'a' + 'A');
	else
		return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     char input;

//     printf("enter characters: ");
//     scanf("%c", &input);
//     char myupperCase = ft_toupper(input);
//     printf("result: %c\n", myupperCase);
//     char upperCase = toupper(input);
//     printf("result: %c\n", upperCase);
//     return(0);
// }