/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:38:12 by mgusakov          #+#    #+#             */
/*   Updated: 2022/01/25 19:09:25 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*chars;
	unsigned char	charc;
	size_t			i;

	i = 0;
	chars = (unsigned char *)s;
	charc = (unsigned char)c;
	while (i < n)
	{
		if (*chars == charc)
			return (chars);
		chars++;
		i++;
	}
	return (NULL);
}
