/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjen <qjen@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 15:26:16 by qjen              #+#    #+#             */
/*   Updated: 2026/11/24 15:26:16 by qjen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%c", (ft_toupper('a')));
	printf("%c", (toupper('a')));
	printf("%c", (ft_toupper('z')));
	printf("%c", (toupper('z')));
	return (0);
}
*/