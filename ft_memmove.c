#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*temp;
	size_t		i;

	d = (char *)dest;
	s = (const char *)src;
	temp = (char *)malloc(n);
	i = 0;
	if (temp == NULL)
		return (NULL);
	while(i < n)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char src[] = "Hello World!";
//     char dest1[20];
//     char dest2[20];
//     memmove(dest2, src, sizeof(src));
//     printf("%s\n", dest1);
//     ft_memmove(dest2, src, sizeof(src));
//     printf("%s\n", dest2);
//     if (strcmp(dest1, dest2) == 0)
//     {
//         printf("Results are identical.\n");
//     }
//     else
//     {
//         printf("Results are different.\n");
//     }
//     return (0);
// }