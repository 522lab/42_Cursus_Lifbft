/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:15:29 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/01 20:21:17 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
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
/*
*************************************************************************
DESCRIPTION
locates last match character in string (including NULL)
*************************************************************************
RETURN
located pointer // NULL (character not found)
*************************************************************************
MANUAL
https://clc-wiki.net/wiki/strrchr
*************************************************************************
 */
