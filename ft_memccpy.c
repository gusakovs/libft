/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 18:16:16 by mgusakov          #+#    #+#             */
/*   Updated: 2021/05/21 18:23:00 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t i;
	unsigned char *chardst;
	unsigned char *charsrc;
	unsigned char charc;

	charc = (unsigned char)c;
	charsrc = (unsigned char *)src;
	chardst = (unsigned char *)dst;
	i = 0;
	if (dst == NULL && src == NULL)
	{
		return (dst);
	}
	while (i < n)
	{
		if (*charsrc == c)
		{
			*chardst++ = *charsrc;
			return (chardst);
		}
		*chardst++ = *charsrc++;
		i++;
	}
	return (NULL);
}