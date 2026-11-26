/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjen <qjen@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 15:04:23 by qjen              #+#    #+#             */
/*   Updated: 2026/11/24 15:04:23 by qjen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*d;
	const unsigned char	*s;
	
	i = 0;
	d = dest;
	s = src;
	if (d > s)
	{
		while (i < n)
		{
			d[n - i - 1] = s[n - i - 1];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "1234567890";
    puts(str);
    memmove(str + 4, str + 3, 3); // copy from [4,5,6] to [5,6,7]
    puts(str);
	char str2[] = "1234567890";
    puts(str2);
    memmove(str2 + 4, str2 + 3, 3); // copy from [4,5,6] to [5,6,7]
    puts(str2);
	return (0);
}
*/