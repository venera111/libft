/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qestefan <qestefan@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:47:19 by qestefan          #+#    #+#             */
/*   Updated: 2022/05/13 16:48:45 by qestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdel(void *ptr)
{
	if (ptr)
	{
		free(ptr);
		ptr = (void *)0;
	}
	return (void *)0;
}