#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == (char)c)
			return ((char *)&string[i]);
		i++;
	}
	return (NULL);
}