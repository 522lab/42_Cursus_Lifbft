/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:03:06 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/05 17:39:08 by nsuphasa         ###   ########.fr       */
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
compares up to NUL or n characters, (safer version of memcmp)
*************************************************************************
RETURN
(-) if s1 < s2
(+) if s1 > s2
(0) if s1 = s2
 */