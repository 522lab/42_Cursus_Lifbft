/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:59:40 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/05 17:42:55 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}
/*
*************************************************************************
DESCRIPTION
count characters in string (excluding NUL)
*************************************************************************
RETURN
src length
*************************************************************************
MANUAL
https://clc-wiki.net/wiki/strlen
 */
