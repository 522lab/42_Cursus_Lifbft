/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:15:29 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/01 20:22:36 by nsuphasa         ###   ########.fr       */
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
located pointer
NULL (character not found)
*************************************************************************
MANUAL
https://clc-wiki.net/wiki/strchr
*************************************************************************
2ND VERSION

	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
	s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
 */
