#include "libft.h"

char    *ft_strjoin(const char *s1, const char *s2)
{
    size_t      i;
    size_t      j;
    char  *dest;
    
    i = 0;
    j = 0;
    dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
    if (!dest)
        return (NULL);
    while (s1[i])
    {
        dest[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}