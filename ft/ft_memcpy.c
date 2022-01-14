/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 17:45:54 by mgusakov          #+#    #+#             */
/*   Updated: 2022/01/14 15:48:38 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
	while (i < n)
	{
		*chardst++ = *charsrc++;
		i++;
	}
	return (dst);
}
