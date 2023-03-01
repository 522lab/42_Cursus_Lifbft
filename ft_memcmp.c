/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 03:24:47 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/02 03:55:21 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
		if (*(unsigned char *)s1++ != *(unsigned char *)s2++)
			return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
	return (0);
}
/*
*************************************************************************
DESCRIPTION
compares up to n characters (less safe version of strncmp)
*************************************************************************
RETURN
(-) if s1 < s2
(+) if s1 > s2
(0) if s1 = s2
*************************************************************************
MANUAL
https://clc-wiki.net/wiki/memcmp
*************************************************************************
VERSION 1.0
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while ((*p1 || *p2) && n--)
		if (*p1++ != *p2++)
			return (*(unsigned char	*)--p1 - *(unsigned char	*)--p2);
	return (0);
}
 */
