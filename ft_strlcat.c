/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:59:49 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/02/23 01:14:42 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// if dstsize > dst length,
// append src to dst upto dstsize - 1 or end of src is reached
// return total length of the concatenated strings

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize <= ft_strlen(src))
		return (ft_strlen(src) + ft_strlen(dst));
	i = ft_strlen(dst);
	j = 0;
	while (src[j] && i < dstsize - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	else
		return (ft_strlen(src) + ft_strlen(dst));
}
