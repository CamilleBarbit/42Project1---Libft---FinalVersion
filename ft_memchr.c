/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:39:46 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/26 12:08:09 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sub;
	size_t			i;
	
	sub = (unsigned char *)s;
	i = 0;
	while (sub[i] && i < n)
	{
		if (sub[i] == (unsigned char)c)
			return ((unsigned char *)&sub[i]);
		i++;
	}
	return (NULL);
}