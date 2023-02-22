/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:33:08 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/02/22 19:19:41 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks alphabet or number.

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
