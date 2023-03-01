/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 04:19:31 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/02 05:53:16 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *src, const char *sub, size_t len_src)
{
	size_t	len_sub;

	if (!*sub || (!src && !len_src))
		return ((char *)src);
	len_sub = ft_strlen(sub);
	while (*src && len_src-- >= len_sub)
		if (!ft_strncmp(src++, sub, len_sub))
			return ((char *)--src);
	return (NULL);
}
/*
*************************************************************************
DESCRIPTION
search substring up to n characters
*************************************************************************
RETURN
pointer to _ when substring is []
first character [match] || src [empty] || NULL [unmatch]
*************************************************************************
MANUAL
https://man.freebsd.org/cgi/man.cgi?query=strnstr
*************************************************************************
IMPLEMENTATION
https://opensource.apple.com/source/Libc/Libc-391.2.3/string/FreeBSD/strnstr.c
*/
