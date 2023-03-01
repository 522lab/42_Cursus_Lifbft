/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:07:22 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/01 20:23:20 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while((*s1 || *s2) && n--)
	{
		if(*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);

}
/*
*************************************************************************
DESCRIPTION
compares up to NUL or n characters
*************************************************************************
RETURN
(-) if s1 < s2
(+) if s1 > s2
(0) if s1 = s2
*************************************************************************
UP TO NUL AS FIRST PRIORITY

if not check NUL, below result would be -1 which is incorrect.
(because "abcd" is equal "abcd")

	strncmp("abcd\0e", "abcd\0f", 6)); // 0

*************************************************************************
2ND VERSION (USE INDEX)
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
*************************************************************************
MANUAL
	https://clc-wiki.net/wiki/strncmp
 */

