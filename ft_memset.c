#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*b;
	size_t			i;

	if (s == NULL)
		return (NULL);
	i = 0;
	b = (unsigned char *)s;
	while (i < n)
	{
		b[i] = c;
		i++;
	}
	return(s);
}