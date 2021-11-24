/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:43:40 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/24 11:43:42 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = ft_strlen((char *)string) - 1;
	while (i >= 0)
	{
		if (string[i] == (char)c)
			return ((char *)&string[i]);
		i--;
	}
	return (NULL);
}