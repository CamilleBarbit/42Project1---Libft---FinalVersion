#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char            *sbis;
    int    i;

    i = 0;
    sbis = malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!sbis)
        return (NULL);
    while (s[i] && i < ft_strlen(s))
    {
        sbis[i] = f(i, s[i]);
        i++;
    }
    sbis[i] = '\0';
    return (sbis);
}