/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjen <qjen@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/25 13:55:19 by qjen              #+#    #+#             */
/*   Updated: 2026/11/25 13:55:19 by qjen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char s1[], const char s2[], size_t n)
{
	size_t	count;
	unsigned char	*a;
	unsigned char	*b;

	count = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (count < n && (a[count] || b[count]))
	{
		if (a[count] != b[count])
			return (a[count] - b[count]);
		count++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char string[] = "Hello World!";
	puts("ft_strncmp");
    printf("%d\n", ft_strncmp(string, "Hello!", 5));
    printf("%d\n", ft_strncmp(string, "Hello", 10));
    printf("%d\n", ft_strncmp(string, "Hello there", 10));
    printf("%d\n", ft_strncmp("Hello, everybody!" + 12, "Hello, somebody!" + 11, 5));
	puts("--------------------");
	puts("strncmp");
    printf("%d\n", strncmp(string, "Hello!", 5));
    printf("%d\n", strncmp(string, "Hello", 10));
    printf("%d\n", strncmp(string, "Hello there", 10));
    printf("%d\n", strncmp("Hello, everybody!" + 12, "Hello, somebody!" + 11, 5));
}
*/