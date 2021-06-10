/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:14:35 by mgusakov          #+#    #+#             */
/*   Updated: 2021/06/10 11:49:53 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void(*del)(void*))
{
	t_list	*to_clear;
	t_list	*next;

	if (!lst)
		return ;
	to_clear = *lst;
	next = to_clear->next;
	while (to_clear != NULL)
	{
		next = to_clear->next;
		del(to_clear->content);
		free(to_clear);
		to_clear = next;
	}
	*lst = NULL;
}
