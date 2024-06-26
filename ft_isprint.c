#include "libft.h"

int ft_isprint(int c)
{
    if(32 <= c && c <= 126)
        return(1);
    else
        return(0); 
}
// #include <stdio.h>
// int main(void)
// {
//     char test_char = 125;
//     if(ft_isprint(test_char))
//         printf("%c 印刷文字ンゴね\n", test_char);
//     else
//         printf("%c 印刷文字じゃないンゴね\n", test_char);
//     return(0);
// }