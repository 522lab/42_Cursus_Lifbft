/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:15:29 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/02 02:04:47 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s) + 1;
	while (len--)
		if (s[len] == (char)c)
			return ((char *)&s[len]);
	return (NULL);
}
/*
*************************************************************************
DESCRIPTION
locates last match character in string (including NULL)
*************************************************************************
RETURN
located pointer || NULL (character not found)
*************************************************************************
MANUAL
https://clc-wiki.net/wiki/strrchr
*************************************************************************
VERSION 1.0
{
	char	*ret;

	ret = 0;
	while (*s)
	{
		if (*s == (char)c)
			ret = (char *)s;
		s++;
	}
	if (*s == (char)c)
		ret = (char *)s;
	return (ret);
}
*************************************************************************
VERSION 2.0
{
	char	*ret;

	ret = 0;
	s--;
	while (*++s)
		if (*s == (char)c)
			ret = (char *)s;
	if (*s == (char)c)
		ret = (char *)s;
	return (ret);
}
*************************************************************************
VERSION 3.0
{
	size_t	len;

	len = ft_strlen(s);
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	while (len--)
		if (s[len] == (char)c)
			return ((char *)&s[len]);
	return (NULL);
}
 */
