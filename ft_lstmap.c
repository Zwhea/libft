/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:31:57 by wangthea          #+#    #+#             */
/*   Updated: 2022/11/17 20:46:00 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new;
    t_list  *temp;
    
     if (!lst)
        return (NULL);
    while (temp)
    {
        new = malloc(sizeof(t_list));
        if (!new)
            ft_delone(new,del);
        new = new->next;
        temp = temp->next;
    }
    return (new);
}

//ft_lstnew?
//ft_delone or clear???