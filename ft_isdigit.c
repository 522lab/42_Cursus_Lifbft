/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:12:15 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/02/21 13:20:11 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/* 
#include <stdio.h>
int	main()
{
	printf("%d\n",ft_isdigit('1'));
	printf("%d\n",ft_isdigit(' '));
	printf("%d\n",ft_isdigit('a'));
}
 */