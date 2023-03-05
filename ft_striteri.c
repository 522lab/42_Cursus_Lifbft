/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 19:59:54 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/05 21:14:59 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = -1;
	while (s[++i])
		f(i, s + i);
}
/*
*************************************************************************
DESCRIPTION
manipulate characters using non-return function
*************************************************************************
RETURN
nothing
*************************************************************************
USAGE
void	upper(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 'a' + 'A';
	i++;
}

#include <stdio.h>
int	main(void)
{
	char s[] = "abcd";
	ft_striteri(s, upper);
	puts(s);
}
 */

