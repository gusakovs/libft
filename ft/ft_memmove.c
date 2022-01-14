/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:13:51 by mgusakov          #+#    #+#             */
/*   Updated: 2022/01/14 15:48:43 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*chardst;
	unsigned char	*charsrc;
	size_t			i;

	i = 0;
	charsrc = (unsigned char *)src;
	chardst = (unsigned char *)dst;
	if (dst == NULL && src == NULL)
	{
		return (dst);
	}
	if (dst < src)
	{
		while (i < len)
		{
			chardst[i] = charsrc[i];
			i++;
		}
	}
	else
		while (len--)
			chardst[len] = charsrc[len];
	return (dst);
}
