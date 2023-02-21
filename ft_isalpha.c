/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:22:33 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/02/21 13:18:52 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/* 
#include <stdio.h>
int	main()
{
	printf("%d\n",ft_isalpha('1'));
	printf("%d\n",ft_isalpha(' '));
	printf("%d\n",ft_isalpha('a'));
}
 */