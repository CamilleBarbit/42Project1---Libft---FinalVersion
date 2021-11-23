#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char			*b;
	size_t			i;
	unsigned char	u;

	if (s == NULL)
		return (NULL);
	i = 0;
	u = (unsigned char)c;
	b = (char *)s;
	while (i < n)
	{
		b[i] = u;
		i++;
	}
	return (s);
}