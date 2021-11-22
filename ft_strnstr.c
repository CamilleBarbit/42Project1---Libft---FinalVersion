#include "libft.h"

char	*ft_strnstr(const char *small, const char *large, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (small[i] == '\0')
		return ((char *)large);
	while (large[i] && i < len)
	{
		j = 0;
		while (small[j] == large[i + j])
		{
			if (small[j + 1] == '\0')
				return ((char*)&large[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}