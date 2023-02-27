/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:03:45 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/02/27 21:21:50 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *dp;
	const char *sp;

	dp = dst;
	sp = src;
	if (!dst && !src)
		return (dst);
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
*************************************************************************
RETURN
pointer to first element.
*************************************************************************
NULL POINTER INTERPRETATION
***************
https://www.shorturl.at/brIST

#include <string.h>
#include <stdio.h>
int main()
{
	memcpy("1234", NULL, 1); // segmentation fault
	memcpy(NULL, "1234", 1); // segmentation fault
	memcpy(NULL, NULL, 1);   // do nothing
	memcpy("1234", NULL, 0); // do nothing
	memcpy(NULL, "1234", 0); // do nothing
	memcpy(NULL, NULL, 0);   // do nothing
}

***************
COUNTER ARGUMENT OF NULL POINTER INTERPRETATION
https://www.imperialviolet.org/2016/06/26/nonnull.html
***************
some compilers won't let you pass NULL, so below check is applied.

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

	memcpy(dst, src, sizeof(src[0]) * 2); => 1, 257, 3, 4

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
OVERLAP VALUE
even we try to write overlap value,
the memcpy() is not writing overlap as it should.
seems like compilers have memmove() as fallback.
https://twitter.com/MalwareMinigun/status/737801492808142848
which is why memcpy() and memmove() yield the same output for overlap.

int main()
{
	char s1[] = "1234567890";
	char s2[] = "1234567890";
	ft_memcpy(s1 + 1, s1, 5);
	memcpy(s2 + 1, s2, 5);
	printf("%s\n",s1); // 1111117890
	printf("%s\n",s2); // 1123457890
}

***************
MEMCPY_S
memcpy_s is a non-standard safer version of memcpy introduced in C11
 */
