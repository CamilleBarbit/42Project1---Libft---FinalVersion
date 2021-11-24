/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:40:43 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/24 10:41:19 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*b;
	size_t		i;

	b = (unsigned char*)s; 
	i = 0;
	while (i < n)
	{
		b[i] = '0';
		i++;
	}
}