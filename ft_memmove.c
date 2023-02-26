/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:06:00 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/02/27 01:14:59 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copy src to dst in non-destructive manner.

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len;
	if ((char *)dst == (char *)src || len == 0)
		return (dst);
	if ((char *)dst > (char *)src && (char *)src + len > (char *)dst)
		while (i--)
			*(char *)(dst + i) = *(char *)(src + i);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/* 
*************************************************************************
DESCRIPTION

copy src to dst in non-destructive manner.

RETURN

pointer to first element.
*************************************************************************
HOW IT PREVENT OVERLAP ?

https://www.equestionanswers.com/c/memcpy-vs-memmove.php
 */