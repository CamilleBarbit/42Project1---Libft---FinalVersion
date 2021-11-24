/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:42:18 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/24 15:43:36 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *maillon;

    maillon = malloc(sizeof(t_list));
    if (!maillon)
        return (NULL);
    maillon->next = NULL;
    maillon->content = content;
    return (maillon);
}

int ft_lstsize(t_list *lst)
{
    int size;

    size = 0;
    while(lst != NULL)
    {
        size++;
        lst = lst->next;
    }
    return (size);
}