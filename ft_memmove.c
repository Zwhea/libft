/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:11:39 by twang             #+#    #+#             */
/*   Updated: 2022/11/09 10:22:24 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*src2;
	unsigned char	*dst2;

	if (!dst && !src)
		return (NULL);
	i = 0;
	src2 = (unsigned char *)src;
	dst2 = (unsigned char *)dst;
	if (src2 > dst2)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (len--)
			dst2[len] = src2[len];
	}
	return (dst);
}
