/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:56:05 by twang             #+#    #+#             */
/*   Updated: 2022/11/10 09:51:07 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c2;

	i = ft_strlen(s);
	c2 = (char) c;
	while (i > 0)
	{
		if (s[i] == c2)
			return ((char *) &s[i]);
		i--;
	}
	return (NULL);
}
