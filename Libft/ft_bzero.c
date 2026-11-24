/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjen <qjen@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 11:48:25 by qjen              #+#    #+#             */
/*   Updated: 2026/11/24 11:48:25 by qjen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*p;

	i = 0;
	p = s;
	while (i < n)
		p[i++] = '\0';
}

/*
#include <strings.h>
#include <stdio.h>
int main(void)
{
	char str[] = "ghghghghghghghghghghgh";
	bzero(str, 5);
	for (size_t i = 0; i < (sizeof(str) / sizeof(str[0])); i++)
	{
		if (str[i] == '\0')
		printf("0");
		else
		printf("%c", str[i]);
	}
	printf("\n");
	char str2[] = "ghghghghghghghghghghgh";
	ft_bzero(str2, 5);
	for (size_t i = 0; i < (sizeof(str2) / sizeof(str2[0])); i++)
	{
		if (str2[i] == '\0')
		printf("0");
		else
		printf("%c", str2[i]);
	}
	printf("\n");
	return (0);
}
*/
