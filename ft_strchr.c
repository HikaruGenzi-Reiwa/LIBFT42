#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
//     const char *str = "Hello, world!";
//     int c = 'o';

//     char *result = ft_strchr(str, c);

//     if(result != NULL)
//     {
//         printf("Character '%c' found at index: %ld\n", c, result - str);
//     }
//     else
//     {
//         printf("Character '%c' not found in the string.\n", c);
//     }
//     return(0);
// }