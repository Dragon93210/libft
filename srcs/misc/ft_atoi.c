/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspar <agaspar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:37:24 by agaspar           #+#    #+#             */
/*   Updated: 2016/02/11 15:28:51 by agaspar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_atoi(const char *str)
{
	int		nb;
	int		sign;

	nb = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+')
		str++;
	else
	{
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
	}
	while (*str != '\0' && ft_isdigit(*str))
		nb = nb * 10 + (*str++ - '0');
	return (nb * sign);
}
