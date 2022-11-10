/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:35:09 by twang             #+#    #+#             */
/*   Updated: 2022/11/08 17:07:52 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src2;
	unsigned char	*dst2;

	i = 0;
	src2 = (unsigned char *)src;
	dst2 = (unsigned char *)dst;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}
