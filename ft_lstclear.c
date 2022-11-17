/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:37:18 by wangthea          #+#    #+#             */
/*   Updated: 2022/11/17 18:40:50 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *temp;
    t_list  *next;
    
    if (!lst)
        return (NULL);
    temp = *lst;
    while (temp)
    {
        del(temp->content);
        next = temps->content;
        free(temp);
        temp = next;
    }
    *lst = NULL;
}