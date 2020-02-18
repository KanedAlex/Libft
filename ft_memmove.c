/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:34:09 by alienard          #+#    #+#             */
/*   Updated: 2019/11/06 12:21:51 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *usrc;
	char *udst;

	usrc = (char *)src;
	udst = (char *)dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
	{
		while (len != 0)
		{
			len--;
			udst[len] = usrc[len];
		}
	}
	return (dst);
}
