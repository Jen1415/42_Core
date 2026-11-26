/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjen <qjen@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 15:14:45 by qjen              #+#    #+#             */
/*   Updated: 2026/11/26 15:14:45 by qjen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*p;
	size_t			len;
	size_t			i;

	if (size != 0 && n > SIZE_MAX / size)
		return (NULL);
	len = n * size;
	p = malloc(len);
	if (!p)
		return (NULL);
	i = 0;
	while (i < len)
		p[i++] = 0;
	return (p);
}

/*
#include <stdio.h>
int	main(void)
{
	int		*a;
	size_t	i;
	
	a = ft_calloc(5, sizeof(int));
	i = 0;
	while (i < 5)
	printf("%d ", a[i++]);
	printf("\n");
	free(a);
	
	free(ft_calloc(0, 5));
	free(ft_calloc(5, 0));
	free(ft_calloc(0, 0));
	
	return (0);
}
*/