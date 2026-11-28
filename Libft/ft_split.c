/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjen <qjen@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/28 16:10:40 by qjen              #+#    #+#             */
/*   Updated: 2026/11/28 16:10:42 by qjen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_countwords(char const *s, char c)
{
	size_t	count;
	int		flag;

	count = 0;
	flag = 1;
	while (*s)
	{
		if (*s == c)
			flag = 1;		
		else if (flag)
		{
			count++;
			flag = 0;
		}
		s++;
	}
	return (count);
}

static void	helper(char const *s, char c, char **arr)
{
	size_t	i;
	size_t	curr;

	i = 0;
	curr = 0;
	while (s[i])
	{
		if (ft_strchr(&s[curr], c))
		{
			
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	words = ft_countwords(s, c);
	arr = malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	if (!ft_strchr(s, c))
		*arr = ft_strdup(s);
	else
		helper(s, c, arr);
	arr[words] = NULL;
	return (arr);
}