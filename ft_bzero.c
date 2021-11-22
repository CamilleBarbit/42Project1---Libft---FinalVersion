#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*b;
	size_t	i;

	b = (unsigned char*)s; 
	i = 0;
	while (i < n)
	{
		b[i] = '0';
		i++;
	}
}