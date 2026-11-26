/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjen <qjen@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 15:31:58 by qjen              #+#    #+#             */
/*   Updated: 2026/11/24 15:31:58 by qjen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%c", (ft_tolower('a')));
	printf("%c", (tolower('a')));
	printf("%c", (ft_tolower('Z')));
	printf("%c", (tolower('Z')));
	return (0);
}
*/