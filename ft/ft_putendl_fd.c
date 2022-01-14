/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:35:49 by mgusakov          #+#    #+#             */
/*   Updated: 2022/01/14 15:48:54 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		ft_putchar_fd('\0', fd);
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
