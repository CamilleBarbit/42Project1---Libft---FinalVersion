/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:12:15 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/26 12:32:39 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list  *tempo;

    tempo = *alst;
    while (tempo->next != NULL)
        tempo = tempo->next;
    tempo->next = new;
    new->next = NULL;
}