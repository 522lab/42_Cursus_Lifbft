/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 23:56:21 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/12 00:15:35 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_all(char **strs, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	*ft_copy_word(const char *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s - len, len + 1);
	return (word);
}

static size_t	ft_count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	words;
	char	**strs;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	strs = malloc(sizeof(char *) * (words + 1));
	if (!strs)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		strs[i] = ft_copy_word(s, c);
		if (!strs[i])
			return (ft_free_all(strs, i));
		while (*s && *s != c)
			s++;
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
