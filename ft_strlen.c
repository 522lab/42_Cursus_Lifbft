/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:59:40 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/02/21 17:34:26 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// count characters in string, null excluded.

#include <stdlib.h>

size_t	ft_strlen(const char *string)
{
	size_t	index;

	index = 0;
	while (*string++)
		index++;
	return (index);
}
