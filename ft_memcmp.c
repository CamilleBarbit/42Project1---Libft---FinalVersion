#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*s1bis;
	const char	*s2bis;
	size_t		i;

	i = 0;
	s1bis = s1;
	s2bis = s2;
	while (s1bis[i] && s2bis[i] && s1bis[i] == s2bis[i] && i < n - 1)
		i++;
	return (s1bis[i] - s2bis[i]);

}

int	main()
{
	const char	s1[]= "Hello. world.!";
	const char	s2[]= "Maman. world.!";
	size_t		n;

	n = 8;
	ft_memcmp(s1, s2, n);
	printf("%d\n", memcmp(s1, s2, n));
	printf("%d\n", ft_memcmp(s1, s2, n));
	return 0;
}
