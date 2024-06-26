#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (size < 1)
		return (res);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}

// unsigned int    ft_strlcpy(char dest, charsrc, unsigned int size);

// int    main(void)
// {
//     char    dest[12];
//     char    *src;
//     int        size;

//     src = "I love You. I need you";
//     size = 11;
//     printf("%d\n", ft_strlcpy(dest, src, size));
//     printf(".%s.\n\n", dest);
//     printf("%lu\n", strlcpy(dest, src, size));
//     printf(".%s.\n\n", dest);
// }
