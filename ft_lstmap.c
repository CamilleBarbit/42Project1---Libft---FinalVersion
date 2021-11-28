/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 14:37:28 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/28 15:19:49 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new;
    t_list  *modif;

    new = ft_lstnew(lst->content);
    modif = new;
    lst = lst->content;
    while (lst->next != NULL)
    {
        new = ft_lstnew(lst->content);
        

    }



    return (new);
}