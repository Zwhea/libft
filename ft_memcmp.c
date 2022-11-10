/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:28:57 by twang             #+#    #+#             */
/*   Updated: 2022/11/10 11:19:44 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s1b;
	char	*s2b;

	i = 0;
	s1b = (char *)s1;
	s2b = (char *)s2;
	while ((s1b[i] == s2b[i]) && (i < n - 1))
		i++;
	return (s1b[i] - s2b[i]);
}
