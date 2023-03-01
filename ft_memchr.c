/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 22:52:29 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/02 01:38:11 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	s -= 1;
	while (n--)
		if (*(unsigned char *)++s == (unsigned char)c)
			return ((unsigned char *)s);
	return (NULL);
}
/*
*************************************************************************
DESCRIPTION
locates first match character up to n bytes
*************************************************************************
RETURN
located pointer || NULL (character not found)
*************************************************************************
MANUAL
https://clc-wiki.net/wiki/memchr
*************************************************************************
VERSION 1.0
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		if (*p != (unsigned char)c)
			p++;
		else
			return (p);
	}
	return (0);
}
*************************************************************************
VERSION 2.0
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return (p);
		p++;
	}
	return (0);
}
*************************************************************************
VERSION 3.0
{
	unsigned char	*p;

	p = (unsigned char *)s - 1;
	while (n--)
		if (*++p == (unsigned char)c)
			return (p);
	return (0);
}
 */
