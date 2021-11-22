#include "libft.h"

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    char    *dest;
    size_t  i;

    i = 0;
    dest = malloc(sizeof(char) * len + 1);
    if (!dest)
        return (NULL);
    while (s[start] && i < len)
    {
        dest[i] = s[start];
        i++;
        start++;
    }
    dest[i] = '\0';
    return (dest);
}