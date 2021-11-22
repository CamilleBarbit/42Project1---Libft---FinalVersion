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