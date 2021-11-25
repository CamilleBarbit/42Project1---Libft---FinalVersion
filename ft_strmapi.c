/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:43:11 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/25 10:44:03 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    char    *sbis;
    int     i;

    i = 0;
    sbis = malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!sbis)
        return (NULL);
    while (s[i] && i < ft_strlen(s))
    {
        sbis[i] = f(i, s[i]);
        i++;
    }
    sbis[i] = '\0';
    return (sbis);
}