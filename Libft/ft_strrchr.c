/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjen <qjen@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 13:34:45 by qjen              #+#    #+#             */
/*   Updated: 2026/11/25 13:34:45 by qjen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	const char	*start;

	ch = c;
	start = s;
	while (*s)
		s++;
	if (ch == '\0')
		return ((char *)s);
	while (s > start)
	{
		s--;
		if (*s == ch)
			return ((char *)s);
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	const char *s = "abca";
	char target = 'a';
	char *res = strrchr(s, target);
	if (res)
	printf("%s\n", res);
	else
	printf("not found\n");
	char *res2 = ft_strrchr(s, target);
	if (res2)
	printf("%s\n", res2);
	else
	printf("not found\n");
}
*/