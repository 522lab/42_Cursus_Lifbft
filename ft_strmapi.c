/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:03:06 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/05 18:05:31 by nsuphasa         ###   ########.fr       */
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

char	function(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
		return (((c - 'a' + 13) % 26) + 'a');
	else if (c >= 'A' && c <= 'Z')
		return (((c - 'A' + 13) % 26) + 'A');
	return (c);
}

ft_strmapi("Hello, world!", function);
 */