/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspar <agaspar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:07:16 by agaspar           #+#    #+#             */
/*   Updated: 2016/03/22 16:23:24 by agaspar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*res;

	res = (unsigned char*)malloc(sizeof(char *) * n);
	if (res)
	{
		ft_memcpy(res, src, n);
		ft_memcpy(dst, res, n);
		free(res);
		return (dst);
	}
	return (NULL);
}
