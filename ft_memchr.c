/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:58:23 by alienard          #+#    #+#             */
/*   Updated: 2019/10/23 18:27:52 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		uc;
	unsigned char		*us;

	i = 0;
	uc = (char)c;
	us = (unsigned char *)s;
	while (i < n && us[i] != (unsigned char)c)
	{
		s++;
		i++;
	}
	if (i == n)
		return (NULL);
	return ((void *)s);
}
