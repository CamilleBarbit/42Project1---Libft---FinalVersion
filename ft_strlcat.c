#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  k;

    i = 0;
    j = ft_strlen(dest);
    k = ft_strlen(src);
    if (size <= j)
        return (size);
    while (j + i <= size - 1)
    {
        dest[j + i] = src[i];
        i++;
    }
    dest[j + i] = '\0';
    return (j + k);
}