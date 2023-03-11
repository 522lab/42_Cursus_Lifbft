/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:26:00 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/11 23:28:38 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char_in_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && is_char_in_set(s1[start], set))
		start++;
	while (end > start && is_char_in_set(s1[end], set))
		end--;
	trimmed_str = ft_substr(s1, start, end - start + 1);
	if (!trimmed_str)
		return (NULL);
	return (trimmed_str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*trimmed;
	char	*trimmed2;
	char	*trimmed3;
	char	*set = " \t\n";
	char	*s1 = "  \t  hello world   \n";
	char	*s2 = "  \t   \n";
	char	*s3 = NULL;

	trimmed = ft_strtrim(s1, set);
	trimmed2 = ft_strtrim(s2, set);
	trimmed3 = ft_strtrim(s3, set);

	printf("%s\n", trimmed); // expected output: "hello world"
	printf("%s\n", trimmed2); // expected output: ""
	printf("%p\n", (void *)trimmed3); // expected output: "NULL"

	free(trimmed);
	free(trimmed2);
	free(trimmed3);
	return (0);
}
 */
