/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 12:08:32 by mgusakov          #+#    #+#             */
/*   Updated: 2021/05/24 12:13:01 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*cs1;
	unsigned char	*cs2;

	cs2 = (unsigned char *)s2;
	cs1 = (unsigned char *)s1;
	if (n == 0 || cs1 == cs2)
		return (0);
	while (--n && *cs1 && *cs2 && *cs1 == *cs2)
	{
		cs1++;
		cs2++;
	}
	return (*cs1 - *cs2);
}
