#include "libft.h"

// size_t	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    unsigned int i = ft_strlen(dst);
    unsigned int j = 0;
    unsigned int d = ft_strlen(dst);
    size_t s = ft_strlen(src);
    if(dstsize < 1)
        return(s  + dstsize);
    while(src[j] && i < dstsize - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    if(dstsize < d)
        return(s + dstsize);
    else
        return(d + s);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char dest[50] = "Hello World";
//     char src[50] = "!";
//     unsigned int size;
    
//     size = 0;
//     printf("%lu\n", strlcat(dest, src, size));
//     printf("%zu\n", ft_strlcat(dest, src, size));
//     printf("dest: %s\nsrc: %s\n", dest, src);
// }

