/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:25:00 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/02 20:46:36 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb >= SIZE_MAX / size || size >= SIZE_MAX / nmemb)
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
WHY CANT ALLOCATE EXACTLY SIZE_MAX ?

if so this will be enough,

	if (nmemb > SIZE_MAX / size || size > SIZE_MAX / nmemb)

but, maximum allocated memory using calloc depends on the system you use
it is not guaranteed that you can allocate memory exactly SIZE_MAX long
*************************************************************************
WHY EQUAL CHECK IS NOT ENOUGH

	if (nmemb == SIZE_MAX || size == SIZE_MAX)

because checking equality of SIZE_MAX is not effectively preventing overflow
since the product of (nmemb * size) may still exceed SIZE_MAX
*************************************************************************
MANUAL
https://man7.org/linux/man-pages/man3/malloc.3.html
 */
