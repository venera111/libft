/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qestefan <qestefan@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:11:07 by qestefan          #+#    #+#             */
/*   Updated: 2022/01/21 15:11:09 by qestefan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long	num;
	char	sign;

	num = 0;
	sign = 1;
	while (*str == ' ' || (*str <= '\r' && *str >= '\t'))
		str++;
	if ((*str == '-') || (*str == '+'))
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		num = 10 * num + (*str++ - '0');
		if (num < 0)
		{
			if (sign < 0)
				return (0);
			else
				return (-1);
		}
	}
	return (sign * num);
}
