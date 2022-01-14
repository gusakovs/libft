/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:42:36 by mgusakov          #+#    #+#             */
/*   Updated: 2022/01/14 19:07:40 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_putnbr(int nb)
{
	unsigned int	n;
	int				c;

	c = 0;
	if (nb < 0)
	{
		c += ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		n %= 10;
	}
	c += ft_putchar(n + '0');
	return (c);
}
