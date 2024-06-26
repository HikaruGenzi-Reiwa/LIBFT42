#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c - 'A' + 'a');
	else
		return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     char input;

//     printf("文字を入力してください: ");
//     scanf("%c", &input);

//     // 入力された文字を小文字に変換する
//     char lowerCase = ft_tolower(input);

//     printf("小文字に変換された文字は: %c\n", lowerCase);

//     return (0);
// }