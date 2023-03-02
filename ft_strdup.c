/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 21:46:23 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/02 22:06:35 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	void	*new;

	new = malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	return ((char *)ft_memcpy(new, s, ft_strlen(s) + 1));
}
/*
*************************************************************************
DESCRIPTION
copy string to allocated memory
*************************************************************************
RETURN
pointer to new string || NULL (allocate fail)
*************************************************************************
IMPLEMENTATION
https://gist.github.com/reagent/3758387
*************************************************************************
MANUAL
https://man7.org/linux/man-pages/man3/strdup.3.html
*************************************************************************
VERSION 1.0
char	*ft_strdup(const char *s)
{
	size_t	len;
	void	*new;

	len = ft_strlen(s) + 1;
	new = malloc(len);
	if (!new)
		return (NULL);
	return ((char *)ft_memcpy(new, s, len));
}
 */
