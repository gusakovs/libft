/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 17:45:54 by mgusakov          #+#    #+#             */
/*   Updated: 2021/05/21 18:14:16 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t i;
	unsigned char *chardst;
	unsigned char *charsrc;

	charsrc = (unsigned char *)src;
	chardst = (unsigned char *)dst;
	i = 0;
	if (dst == NULL && src == NULL)
	{
		return (dst);
	}
	while (i < n)
	{
		*chardst++ = *charsrc++;
		i++;
	}
	return (dst);
}
