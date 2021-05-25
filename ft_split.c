/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 17:25:36 by mgusakov          #+#    #+#             */
/*   Updated: 2021/05/25 16:45:33 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_wc(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static void	*ft_malloc(char const *s, char c)
{
	char	*ptr;
	int		i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	ptr = malloc(sizeof(char) * i + 1);
	if (!ptr)
		return (NULL);
	return (ptr);
}

static char	**ft_splitter(char **str, char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	j;

	i = 0;
	ptr = str;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			ptr[i] = ft_malloc(s, c);
			j = 0;
			while (*s && *s != c)
				ptr[i][j++] = *s++;
			ptr[i++][j] = '\0';
		}
	}
	ptr[i] = ft_malloc(s, c);
	ptr[i] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (s == NULL)
		return (NULL);
	ptr = (char **)malloc(sizeof(char *) * ft_wc(s, c) + 1);
	if (!ptr)
		return (NULL);
	ft_splitter(ptr, s, c);
	return (ptr);
}
