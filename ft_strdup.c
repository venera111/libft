/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qestefan <qestefan@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:12:45 by qestefan          #+#    #+#             */
/*   Updated: 2022/01/21 15:12:46 by qestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	result = (char *)malloc(sizeof(char) * i + 1);
	if (!result)
		return ((void *)0);
	i = 0;
	while (*s1)
		result[i++] = *s1++;
	result[i] = '\0';
	return (result);
}
