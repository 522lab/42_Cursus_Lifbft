/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:03:45 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/02/22 20:44:41 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copy src to dst, overlap not protected.

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = n;
	if (!dst && !src)
		return (dst);
	while (i--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (dst - n);
}
/*
	store original n value for further use.
		i = n;

	memcpy(NULL, NULL, 0) won't do anything
	but caused warning for most compilers
	and we have -Werror, so we have to guard.
	https://www.imperialviolet.org/2016/06/26/nonnull.html
	https://www.shorturl.at/brIST

		if (!dst && !src)
			return (dst);

	void pointer have no associate data type
	(don't know how many bytes it's going to read or write. int? char?)
	also can't dereference, so type cast then dereference to assign value

		*(unsigned char *)dst++ = *(unsigned char *)src++;

	return pointer to first element
		return (dst - n);
}
 */
