/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:39:28 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/29 11:28:43 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
   t_list   *list;
   t_list   *temp;

   list = *lst;
   while (list != NULL)
   {
       temp = list;
       list = list->next;
       ft_lstdelone(temp, del);
   }
   lst = NULL;
}