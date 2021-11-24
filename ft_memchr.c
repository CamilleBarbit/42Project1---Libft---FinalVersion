/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:39:46 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/24 11:39:47 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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