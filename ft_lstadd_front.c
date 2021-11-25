/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:54:56 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/25 12:50:27 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **alst, t_list *new)
{
    if (*alst == NULL)
        *alst = new;
    while (new)
    {
        new->next = *alst;
        *alst = new;
    }
    
}