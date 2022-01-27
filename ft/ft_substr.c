/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:15:19 by mgusakov          #+#    #+#             */
/*   Updated: 2022/01/25 19:11:56 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	strlen;
	size_t	i;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (len > strlen)
		str = ft_calloc(sizeof(char), (strlen + 1));
	else
		str = ft_calloc(sizeof(char), (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (strlen >= start)
		while (s[start] && i < len)
			str[i++] = s[start++];
	return (str);
}
