/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:25:00 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/26 16:49:40 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr)
		ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
/*
*************************************************************************
DESCRIPTION
allocate memory by (number of member * type size), then set memory to 0
*************************************************************************
RETURN
-standard
error (overflow) || pointer (success) || NULL (size, member = 0)
-Moulinette
NULL (overflow) || pointer (success) || NULL (size, member = 0)
*************************************************************************
MANUAL
https://man7.org/linux/man-pages/man3/malloc.3.html
 */
