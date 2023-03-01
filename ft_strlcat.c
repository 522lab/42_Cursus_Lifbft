/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:59:49 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/01 12:35:29 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ld;
	size_t	ls;
	size_t	i;
	size_t	j;

	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	if (dst == NULL && dstsize == 0)
		return (ls);
	if (dstsize <= ld)
		return (dstsize + ls);
	i = ld;
	j = 0;
	while (src[j] && i < dstsize - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (ld + ls);
}
/*
*************************************************************************
DESCRIPTION
if dstsize > dst length,
append src to dst upto dstsize - 1 or end of src is reached
*************************************************************************
RETURN
total length of the concatenated strings
*************************************************************************
https://linux.die.net/man/3/strlcat
 */
