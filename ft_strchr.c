/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:42:11 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/26 11:49:49 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *string, int c)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == c)
			return ((char *)&string[i]);
		i++;
	}
	return (NULL);
}