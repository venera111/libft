/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qestefan <qestefan@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:13:17 by qestefan          #+#    #+#             */
/*   Updated: 2022/01/21 15:13:18 by qestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if (!c)
		return ((char *)s + len);
	while (len--)
		if (s[len] == (unsigned char)c)
			return ((char *)s + len);
	return ((void *)0);
}
