#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
//    const char *str = "I miss kawamoto more than life";
//     size_t len = ft_strlen(str);
//     printf("Length of \"%s\" is: %zu\n", str, len);
//     return 0;
// }