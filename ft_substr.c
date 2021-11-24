/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:37:29 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/24 11:37:31 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    char    *dest;
    size_t  i;

    i = 0;
    dest = malloc(sizeof(char) * len + 1);
    if (!dest)
        return (NULL);
    while (s[start] && i < len)
    {
        dest[i] = s[start];
        i++;
        start++;
    }
    dest[i] = '\0';
    return (dest);
}