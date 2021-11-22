#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	sizebis;

	sizebis = size * nmemb;
	if (sizebis == 0)
		return (NULL);
	ptr = malloc(sizebis);
	if (!ptr)
		return (NULL);
	ft_bzero((unsigned char *)ptr, nmemb); 
	return (ptr);
}
