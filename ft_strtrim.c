/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twang <twang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:17:13 by twang             #+#    #+#             */
/*   Updated: 2022/11/15 17:43:17 by twang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	i = 0;
	j = ft_strlen(s1);
	k = 0;
	while (s1[i] && ft_strchr((char *)set, (int)s1[i]) != 0)
		i++;
	while ((j > 0) && ft_strrchr((char *)set, (int)s1[j]) != 0)
		j--;
	trim = ft_substr(s1, i, (ft_strlen(s1) - i - ft_strlen(&s1[j])) + 1);
	return (trim);
}
