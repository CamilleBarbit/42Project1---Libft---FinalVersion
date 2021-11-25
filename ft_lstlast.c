/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:37:19 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/25 10:10:46 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list  *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);
    while (lst->next != NULL)
        lst = lst->next;
    return (lst);
}

int main(void)
{
    t_list  *maillon1;
    t_list  *maillon2;
    t_list  *result;

    maillon1 = ft_lstnew("salut");
    maillon2 = ft_lstnew("bye");
    maillon1->next = maillon2;
    maillon2->next = NULL;
    
    result = ft_lstlast(maillon1);
    printf("%s\n", (char *)result->content);
}