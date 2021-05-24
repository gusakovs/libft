/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgusakov <mgusakov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 18:15:19 by mgusakov          #+#    #+#             */
/*   Updated: 2021/05/24 18:31:57 by mgusakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = ft_strlen(s) - start + 1; 

	if (!(ptr = malloc(sizeof(char *) * i)))
		return (NULL);
	while (start--)
		s++;
	while (*s && len--)
		*ptr++ = *s++;
	return (ptr);
}
