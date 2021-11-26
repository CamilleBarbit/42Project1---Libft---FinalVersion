/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camillebarbit <camillebarbit@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:42:18 by camillebarb       #+#    #+#             */
/*   Updated: 2021/11/26 11:18:37 by camillebarb      ###   ########.fr       */
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