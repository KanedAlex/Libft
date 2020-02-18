/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 20:47:21 by alienard          #+#    #+#             */
/*   Updated: 2019/10/23 20:24:25 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*udst;
	unsigned char	*usrc;
	size_t			i;

	i = 0;
	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	while (n > i)
	{
		udst[i] = usrc[i];
		if (usrc[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
