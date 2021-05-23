/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 18:01:31 by mgusakov          #+#    #+#             */
/*   Updated: 2021/05/23 18:06:12 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	size_t len;
	size_t i;
	char *str;

	str = (char *)s;
	i = 0;
	len = ft_strlen(s) + 1;
	while (i++ < len)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	return (NULL);
}