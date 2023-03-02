/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:10:31 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/02 17:23:14 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len--)
		*p++ = (unsigned char)c;
	return (b);
}
/*
*************************************************************************
DESCRIPTION
The memset function copies the value of c (converted to an unsigned char)
into each of the ﬁrst n characters of the object pointed to by s.
*************************************************************************
RETURN
pointer to first element.
*************************************************************************
USAGE
write single character to a char array.
or write 0 or -1 to an int array.
*************************************************************************
WHY TAKE INTEGER AS INPUT (INT C)?
https://stackoverflow.com/questions/5919735
*************************************************************************
WHY ONLY 0 AND -1 ALLOWED?
because 0 and -1 are the only two integers that have identical 4 bytes
https://linuxhint.com/memset_function/
*************************************************************************
UNSIGNED CHAR ?
it doesn't matter if the function convert value to char or unsigned char
before copying, at the end of the day, it's up to the data type of target
array.

#include <stdio.h>
#include <string.h>
int main()
{
    char c = 200;
    int n = 2;
    char arr1[n];
    memset(arr1, c, n);
    for(int i = 0; i < n; i++)
        printf("%d ", arr1[i]); // -56 -56

    printf("\n");

    unsigned char arr2[n];
    memset(arr2, c, n);
    for(int i = 0; i < n; i++)
        printf("%d ", arr2[i]); // 200 200
}
 */
