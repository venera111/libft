/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qestefan <qestefan@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:13:24 by qestefan          #+#    #+#             */
/*   Updated: 2022/01/21 15:13:25 by qestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	if (!s)
		return ((void *)0);
	i = ft_strlen(s);
	if (i <= start || !s[0] || !len)
		return (ft_calloc(1, 1));
	if (start + len > i)
		len = i - start;
	result = malloc(sizeof(char) * len + 1);
	if (!result)
		return ((void *)0);
	i = 0;
	while (i < len)
		result[i++] = s[start++];
	result[i] = '\0';
	return (result);
}
