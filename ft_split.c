/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:42:05 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/26 11:09:34 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_count_words(char const *string, char a)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (string[i])
    {
        if (string[i] != a && (string[i + 1] == a || string[i + 1] == '\0'))
            count += 1;
        i++;
    }
    return (count);
}

static int  ft_count_letters(char const *string, char a)
{
    int i;

    i = 0;
    while (string[i] && string[i] != a)
        i++;
    return (i);
}


char    **ft_split(char const *s, char c)
{
    char  **tab;
    int   i;

    i = 0;
    tab = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
    if (!tab)
        return (NULL);
    while (ft_count_words(s, c))
    {
        while (*s && *s == c)
            s++;
        if (*s != c)
        {
            tab[i] = ft_substr(s, 0, ft_count_letters(s, c));
            i++;
        }
        while (*s && *s != c)
            s++;
    }
    tab[i] = '\0';
    return (tab);
}