#include "libft.h"

int	ft_isalnum(int a)
{
	if (!(ft_isalpha(a) || ft_isdigit(a)))
		return (0);
	return (1);
}
