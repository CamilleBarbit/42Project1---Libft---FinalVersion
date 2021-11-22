#include "libft.h"

char    *ft_strtrim(const char *s1, const char *set)
{
    char    *s1bis;
    int  i;
    int  j;

    i = 0;
    if (!s1[i] || !set[i])
        return (NULL);
    while (s1[i] && ft_strchr(set, s1[i]))
        i++;
    j = ft_strlen(s1) - 1;
    while (j > 0 && ft_strchr(set, s1[j]))
        j--;
    s1bis = ft_substr((char *)s1, i, (j - i + 1));
    return (s1bis);
}