#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const	char *sub;
	size_t	i;
	
	sub = s;
	i = 0;
	while (sub[i] && i < n)
	{
		if (sub[i] == (unsigned char)c)
			return ((char*)&sub[i]);
		i++;
	}
	return (NULL);
}
