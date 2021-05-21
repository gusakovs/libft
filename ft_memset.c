/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:57:31 by mgusakov          #+#    #+#             */
/*   Updated: 2021/05/21 17:23:48 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	int i;
	unsigned char *res;

	i = 0;
	res = b;
	while (len)
	{
		*res = c;
		res++;
		len--;
	}
	return (b); 
}