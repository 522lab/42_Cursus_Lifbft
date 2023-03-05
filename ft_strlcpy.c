/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:51:58 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/05 17:43:00 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dstsize)
		return (ft_strlen(src));
	i = -1;
	while (src[++i] && i < dstsize - 1)
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
*************************************************************************
DESCRIPTION
dstsize must > 0
copy src to dst upto src or dstsize - 1 (spare one for NUL)
NUL-terminated
*************************************************************************
RETURN
src length
*************************************************************************
MANUAL
https://linux.die.net/man/3/strlcpy
*************************************************************************
VERSION 1.0
{
	if (!dstsize)
		return ft_strlen(src);
	if (*src && dstsize > 1)
	{
		*dst = *src;
		return 1 + ft_strlcpy(dst + 1, src + 1, dstsize - 1);
	}
	*dst = '\0';
	return ft_strlen(src);
}
 */
