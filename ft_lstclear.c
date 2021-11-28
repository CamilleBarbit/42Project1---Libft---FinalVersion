/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:39:28 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/28 12:44:57 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
   t_list   *list;

   list = *lst;
   if (list->next == NULL)
        ft_lstdelone(list, del);
   while (list->next != NULL)
   {
       ft_lstdelone(list, del);
       list = list->next;
   }
}