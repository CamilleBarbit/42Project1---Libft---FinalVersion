/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:39:28 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/24 11:39:30 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count_char(int n)
{
    int count;

    count = 0;
    if (n == 0)
        count = 1;
    if (n < 0)
    {
        n = n * -1;
        count = 1;
    }
    while (n > 0)
    {
        n = n / 10;
        count += 1;
    }
    return (count);

}

char    *ft_itoa(int n)
{
    char    *string;
    int     i; 

    i = ft_count_char(n);
    string = malloc(sizeof(char) * ft_count_char(n) + 1);
    if (!string)
        return (NULL);
    string[i] = '\0';
    i--;
    if (n == 0)
        string[i] = 48;
    if (n < 0)
    {
        n = n * -1;
        string[0] = '-';
    }
    while (n > 0)
    {
        string[i] = n % 10 + '0';
        n = n / 10;
        i--;
    }
    return (string);
}