/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjen <qjen@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 21:32:07 by qjen              #+#    #+#             */
/*   Updated: 2026/11/26 21:32:07 by qjen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *restrict src, size_t dsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = 0;
	dstlen = 0;
	i = 0;
	while (src[srclen])
		srclen++;
	if (dsize == 0)
		return (srclen);
	while (dstlen < dsize && dst[dstlen])
		dstlen++;
	if (dstlen == dsize)
		return (srclen + dsize);
	while (src[i] && dstlen + i + 1 < dsize)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (srclen + dstlen);
}

/*
#include <stdio.h>
int	main(void)
{
	char buf[] = "abc";
	char *src = "defghij"; 
	printf("%zu\n", ft_strlcat(buf, src, 8));
	char buf2[] = "abcdefgh";
	char *src2 = "defghij"; 
	printf("%zu\n", ft_strlcat(buf2, src2, 8));
}
case 1: dstlen >= dsize
no cat, no null terminating the dst, return srclen + dsize.

case 2: dstlen < dsize
cat and rewrite the null terminator to dst, return srclen + dstlen
*/