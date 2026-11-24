/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjen <qjen@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 11:22:06 by qjen              #+#    #+#             */
/*   Updated: 2026/11/24 11:22:06 by qjen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*p;

	i = 0;
	p = s;
	while (i < n)
		p[i++] = (unsigned char)c;
	return (s);
}

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char str[] = "ghghghghghghghghghghgh";
	memset(str,'a',5);
	printf("str = \"%s\"\n", str);
	char str2[] = "ghghghghghghghghghghgh";
	ft_memset(str2, 'a' ,5);
	printf("str = \"%s\"\n", str);
	return (0);
}
*/