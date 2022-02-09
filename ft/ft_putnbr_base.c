/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:22:10 by mgusakov          #+#    #+#             */
/*   Updated: 2022/02/09 18:04:21 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(unsigned long long nb, const char *base)
{
	unsigned long long	len;
	int					cnt;

	cnt = 0;
	len = ft_strlen(base);
	if (nb >= len)
		cnt += ft_putnbr_base(nb / len, base);
	cnt += ft_putchar(base[nb % len]);
	return (cnt);
}
