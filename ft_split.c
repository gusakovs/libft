/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 17:25:36 by mgusakov          #+#    #+#             */
/*   Updated: 2021/06/10 12:05:38 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wc(char const *s, char c)
{
	size_t	ct;

	ct = 0;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		ct++;
		while (*s && *s == c)
			s++;
	}
	return (ct);
}

static size_t	ft_wrdlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s != c)
	{
		s++;
		i++;
	}
	return (i);
}

static char	*ft_malloc(char const *s, char c)
{
	char	*str;
	size_t	wrdlen;

	wrdlen = ft_wrdlen(s, c);
	str = ft_calloc(sizeof(char), (wrdlen + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s, wrdlen);
	return (str);
}

static void	*ft_free(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free (tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	wc;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (*s && *s == c)
		s++;
	wc = ft_wc(s, c);
	tab = malloc(sizeof(void *) * (wc + 1));
	if (!tab)
		return (NULL);
	while (i < wc)
	{
		tab[i] = ft_malloc(s, c);
		if (!tab[i])
			return (ft_free(tab));
		s += ft_strlen(tab[i++]);
		while (*s && *s == c)
			s++;
	}
	tab[i] = NULL;
	return (tab);
}
