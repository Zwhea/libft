/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:28:15 by wangthea          #+#    #+#             */
/*   Updated: 2022/11/17 18:17:28 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int length;
    
    length = 0;
    if (!lst)
    {
        while (lst != NULL)
        {
            length++;
            lst = lst->next;
        }
    }
    return (length);
}