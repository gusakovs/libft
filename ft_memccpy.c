/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 18:16:16 by mgusakov          #+#    #+#             */
/*   Updated: 2021/05/24 12:01:32 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*chardst;
	unsigned char	*charsrc;

	charsrc = (unsigned char *)src;
	chardst = (unsigned char *)dst;
	i = 0;
	if (dst == NULL && src == NULL)
	{
		return (dst);
	}
	while (i < n && *charsrc != (unsigned char)c)
	{
		*chardst++ = *charsrc++;
		i++;
	}
	if (*charsrc == (unsigned char)c)
	{
		*chardst++ = *charsrc;
		return (chardst);
	}
	return (NULL);
}
