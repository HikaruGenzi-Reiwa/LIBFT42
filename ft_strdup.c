#include "libft.h"

char *ft_strdup(const char *s1)
{
    int i;
    char *s_cpy;
    i = 0;
    s_cpy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if(!s_cpy)
        return(NULL);
    while(s1[i])
    {
        s_cpy[i] = s1[i];
        i++;
    }
    s_cpy[i] = '\0';
    return(s_cpy);
}