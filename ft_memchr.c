/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:40:58 by twang             #+#    #+#             */
/*   Updated: 2022/11/10 10:25:43 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*s1;
	char			c2;
	size_t			i;

	c2 = (char) c;
	s1 = (char *) s;
	i = 0;
	if (n == '\0' || c2 == '\0')
		return (NULL);
	while (s1[i] && (i < n))
	{
		if (s1[i] == c2)
			return (&s1[i]);
		i++;
	}
	return (NULL);
}
