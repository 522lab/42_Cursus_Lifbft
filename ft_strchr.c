/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:15:29 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/01 23:40:12 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}
/*
*************************************************************************
DESCRIPTION
locates first match character in string (including NUL)
*************************************************************************
RETURN
located pointer || NULL (character not found)
*************************************************************************
MANUAL
https://clc-wiki.net/wiki/strchr
*************************************************************************
VERSION 1.0
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
	s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
*************************************************************************
VERSION 2.0
{
    char  *p;

    p = (char *)s - 1;
	while (*++p)
		if (*p == (char)c)
			return (p);
	if (*p == (char)c)
		return (p);
	return (0);
}
*************************************************************************
VERSION 3.0
{
    s -= 1;
	while (*++s)
		if (*s == (char)c)
			return ((char *)s);
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
 */
