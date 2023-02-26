/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:03:45 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/02/27 01:12:41 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;

	if (!dst && !src)
		return (dst);
	dp = dst;
	sp = src;
	while (n--)
		*dp++ = *sp++;
	return (dst);
}
/*
*************************************************************************
DESCRIPTION

copy the first n bytes pointed to by src to the buffer pointed to by dest.
Source and destination may not overlap.
If source and destination might overlap, memmove() must be used instead.

RETURN

pointer to first element.
*************************************************************************
NON-NULL POINTER INTERPRETATION

memcpy(NULL, NULL, 3) won't do anything
https://www.imperialviolet.org/2016/06/26/nonnull.html
https://www.shorturl.at/brIST

but it caused warning for some compilers, so below check is applied.

	if (!dst && !src)
		return (dst);
*************************************************************************
FUNCTION PROTOTYPE PER C99

https://clc-wiki.net/wiki/C_standard_library:string.h:memcpy

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *dp = dst;
	const char *sp = src;
	while (n--)
		*dp++ = *sp++;
	return dst;
}
*************************************************************************
VOID POINTER

(void *) have no associate data type
(don't know how many bytes it's going to read or write. int? char?)

	char		*dp;
	const char	*sp;

the source pointer is constant.
to prevent unintended modifications to the original data.
*************************************************************************
WHY CHAR POINTER ?

I think the reason to type-cast to char* is it easy to copy byte by byte.
and be able to increase pointer by one address at a time.
without having to worry about the data type.
as long as user pass enough bytes to copy.
for example,

	int dst[4] = {1, 2, 3, 4};
	int src[4] = {1, 257, 65793, 16843009};

let's say we want to copy the first two elements, we can call like this
	memcpy(dst, src, sizeof(src[0]) * 2); => 5, 6, 3, 4

or we want to copy all elements, we can call like this
	memcpy(dst, src, sizeof(src));
visualize at https://rb.gy/7s2jvx
*************************************************************************
MEMCPY VS MEMMOVE

https://www.equestionanswers.com/c/memcpy-vs-memmove.php
https://stackoverflow.com/questions/4415910/memcpy-vs-memmove
*************************************************************************
FURTHER STUDY

***************
even we use it with NULL argument, some compilers have memmove() as fallback.
https://twitter.com/MalwareMinigun/status/737801492808142848
which is why memcpy() and memmove() yield the same output for overlap.

below can compile in most compilers.

#include <string.h>
int main()
{
	memcpy(NULL, NULL, 5);
}
***************
memcpy_s is a non-standard safer version of memcpy introduced in C11

 */