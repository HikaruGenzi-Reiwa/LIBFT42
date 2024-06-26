#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	if (len)
	{
		while (*s1 && ft_strchr(set, *(s1 + len - 1)))
			len--;
	}
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len + 1);
	return (result);
}