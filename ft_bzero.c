#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char *ptr;
	i = 0;
	if (!s)
		return ;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// int main(void)
// {
//     char str[20] = "Hello World!";
//     size_t len = 20;

//     printf("Before ft_bzero; %s\n" , str);

//     ft_bzero(str, len);

//     printf("After ft_bzero; %s\n" , str);
// }

//バイト列*sから始める領域の先頭nバイトを数値ゼロ（値が'\0'のバイト）で埋める。
// memsetの第2引数がゼロに置き換わる