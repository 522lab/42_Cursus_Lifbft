/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:06:00 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/05 17:43:52 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dp;
	const char	*sp;

	dp = dst;
	sp = src;
	if (dp > sp)
		while (len--)
			*(dp + len) = *(sp + len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/* 
*************************************************************************
DESCRIPTION
copy src to dst in non-destructive manner.
*************************************************************************
RETURN
pointer to first element.
*************************************************************************
HOW IT PREVENT OVERLAP ?
by copy backward.
https://www.equestionanswers.com/c/memcpy-vs-memmove.php
 */