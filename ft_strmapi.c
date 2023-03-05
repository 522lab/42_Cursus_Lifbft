/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:03:06 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/05 21:10:29 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*map;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	map = malloc(len + 1);
	if (!map)
		return (NULL);
	i = 0;
	while (s[i])
	{
		map[i] = f(i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
/*
*************************************************************************
DESCRIPTION
manipulate characters using callback function
*************************************************************************
RETURN
manipulated characters
*************************************************************************
USAGE

char	rot_13(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return (((c - 'a' + 13) % 26) + 'a');
	else if (c >= 'A' && c <= 'Z')
		return (((c - 'A' + 13) % 26) + 'A');
	return (c);
}
#include <stdio.h>
int	main(void)
{
	char s[] = "abcd";
	ft_strmapi(s, rot_13);
	puts(s);
}
 */
