/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:06:00 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/02/22 22:15:08 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copy src to dst, overlap protected.

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d == s || len == 0)
		return (d);
	if (d > s && s + len > d)
	{
		while (len--)
			d[len] = s[len];
	}
	else
		ft_memcpy(d, s, len);
	return (d);
}
