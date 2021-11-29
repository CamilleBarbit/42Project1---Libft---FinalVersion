/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 14:37:28 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/29 11:53:25 by camillebarb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new;
    t_list  *modif_lst;

    new = ft_lstnew((*f)(lst->content));
    modif_lst = new;
    lst = lst->next;
    while (lst != NULL)
    {
        if (!new)
        {
            ft_lstclear(&modif_lst, del);
            return (0);
        }  
        new = new->next;
        new = ft_lstnew((*f)(lst->content));
        modif_lst->next = ft_lstadd_back(&modif_lst, new);
        lst = lst->next;
    }
    return (modif);
}

void    *foo(void *content)
{
    char    *newcontent;

    newcontent = (char *)content;
    newcontent = "oui";
    return (newcontent);
}

void    del(void *content)
{
    free(content);
}

void    afficher(t_list *maillon)
{
    while (maillon)
    {
        printf("%s\n", maillon->content);
        maillon = maillon->next;
    }
}

int main()
{
    t_list  *maillon1;
    t_list  *maillon2;
    t_list  *maillon3;
    t_list  *new;

    maillon1 = ft_lstnew("salut");
    maillon2 = ft_lstnew("ça va");
    maillon3 = ft_lstnew("oui, merci");
    new = ft_lstnew(NULL);

    maillon1->next = maillon2;
    maillon2->next = maillon3;

    afficher(maillon1);
    new = ft_lstmap(maillon1, foo, del);
    afficher(new);
    return (0);

}