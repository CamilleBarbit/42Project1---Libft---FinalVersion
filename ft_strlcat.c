/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:42:47 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/26 10:02:18 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, char const *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  k;

    i = 0;
    j = ft_strlen(dest);
    k = ft_strlen(src);
    if (size <= j)
        return (size);
    while (j + i <= size - 1)
    {
        dest[j + i] = src[i];
        i++;
    }
    dest[j + i] = '\0';
    return (j + k);
}