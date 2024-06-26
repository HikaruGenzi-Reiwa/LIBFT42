#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	else if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	j = 0;
	i = start;
	while (j < len && s[i])
		result[j++] = s[i++];
	result[j] = '\0';
	return (result);
}