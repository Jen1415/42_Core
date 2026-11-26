/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjen <qjen@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 18:27:40 by qjen              #+#    #+#             */
/*   Updated: 2026/11/24 18:27:40 by qjen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *restrict src, size_t dsize)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (src[len])
		len++;
	if (dsize == 0)
		return (len);
	i = 0;
	while (src[i] && i + 1 < dsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

/*
#include <stdio.h>
int main(void)
{
	char dst[] = "hell";
	char *src = "worldadas";
	printf("%zu\n", ft_strlcpy(dst, src, sizeof(dst)));
	return (0);
}
*/