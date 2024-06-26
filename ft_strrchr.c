#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s1;
	char	c1;

	s1 = (char *)s;
	c1 = (char)c;
	i = ft_strlen(s1);
	while (i >= 0)
	{
		if (s1[i] == c1)
			return (&s1[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char	str[] = "Hello, world!";
// 	int			character;
// 	char		*result;

// 	character = 'o';
// 	result = ft_strrchr(str, character);
// 	if (result != NULL)
// 	{
// 		printf("Last occurrence of '%c' is at position: %ld\n", character,
// 			result - str);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found in the string.\n", character);
// 	}
// 	result = strrchr(str, character);
// 	if (result != NULL)
// 	{
// 		printf("Last occurrence of '%c' is at position: %ld\n", character,
// 			result - str);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found in the string.\n", character);
// 	}
// 	return (0);
// }
