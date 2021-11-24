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
	return (b);
}

int	main(void)
{
	size_t	len;
	char	s[]= "BONJOUR MON SOLEIL";
	int	c;

	c = 45;
	len = 5;
	printf("%s\n", s);
	ft_memset(s + 1, c, len);
	printf("%s\n", s);
}