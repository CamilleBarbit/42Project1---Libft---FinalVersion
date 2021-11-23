#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
int	main()
{
	char 		d[12];
	const char	s[]= "HELLO LES BOYS";
	size_t		n;

	n = 3;
	ft_memcpy(d, s, n);
	printf("%s\n", d);
	memcpy(d, s, n);
	printf("%s\n", d);
	return 0;
}