/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qestefan <qestefan@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:12:18 by qestefan          #+#    #+#             */
/*   Updated: 2022/01/21 15:12:19 by qestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0 || src == dst)
		return (dst);
	if (dst > src && dst < src + len)
	{
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		return (dst);
	}
	else
	{
		while (i++ < len)
		{
			*((unsigned char *)dst) = *((unsigned char *)src);
			++dst;
			++src;
		}
	}
	return (dst - len);
}
