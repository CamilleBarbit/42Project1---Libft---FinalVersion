#include "libft.h"

int	ft_isalpha(int a)
{
	if (!((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')))
		return (0);
	return (1);
}
