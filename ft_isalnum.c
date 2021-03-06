/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qestefan <qestefan@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:11:22 by qestefan          #+#    #+#             */
/*   Updated: 2022/01/21 15:11:24 by qestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (!((c >= '0' && c <= '9') || (c <= 'Z' && c >= 'A')
			|| (c <= 'z' && c >= 'a')))
		return (0);
	return (1);
}
