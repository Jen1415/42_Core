/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjen <qjen@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 18:44:04 by qjen              #+#    #+#             */
/*   Updated: 2026/11/24 18:44:04 by qjen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
    char ch;

    ch = c;
	while (*s)
	{
		if (*s == ch)
			return ((char *)s);
        s++;
	}
    return (ch == '\0' ? (char *)s : NULL);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	const char *s = "hello";
	char target = 'p';
	char *res = strchr(s, target);
	if (res)
	printf("%s\n", res);
	else
	printf("not found\n");
	char *res2 = ft_strchr(s, target);
	if (res2)
	printf("%s\n", res2);
	else
	printf("not found\n");
}
*/