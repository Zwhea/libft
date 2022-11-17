/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wangthea <wangthea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:05:42 by wangthea          #+#    #+#             */
/*   Updated: 2022/11/17 17:13:57 by wangthea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_intlen(int n)
{
    int lenght;
    
    lenght = 0;
    if (n < 0)
    {
        lenght++;
        n *= -1;
    }
    hile (n > 0)
    {
        lenght++;
        n /= 10;
    }
    return (lenght);
}

char    *ft_itoa(int n)
{
    size_t  i;
    char    *s;
    
    i = ft_intlen(n) - 1;
    s = ft_calloc(ft_intlen(n) + 1, sizeof(char));
    if (n == 0)
    {
        s[0] = '0';
        return (s);
    }
    if (n < 0)
    {
        s[0] = '-';
        n *= -1;
    }
    while (n > 0)
    {
        s[i] = (n % 10) + '0';
        n /= 10;
        i--;
    }
    return (s);
}