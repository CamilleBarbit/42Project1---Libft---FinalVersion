#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*sub;
	unsigned char	b;
	size_t	i;
	
	sub = (const char *)s;
	b = (unsigned char)c;
	i = 0;
	while (sub[i] && i < n)
	{
		if (sub[i] == b)
			return ((char *)&sub[i]);
		i++;
	}
	return (NULL);
}

int	main()
{
	const char	s[]= "Hello. world.!";
	int			c;
	size_t		n;

	c = 'd';
	n = 14;
	ft_memchr(s, c, n);
	printf("%p\n", memchr(s, c, n));
	printf("%p\n", ft_memchr(s, c, n));
	return 0;
}
