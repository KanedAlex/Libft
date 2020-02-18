/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:21:39 by alienard          #+#    #+#             */
/*   Updated: 2019/10/23 20:21:25 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*us1;
	char	*us2;

	i = 0;
	us1 = (char *)s1;
	us2 = (char *)s2;
	if (n == 0)
		return (0);
	while (us1[i] == us2[i] && i < n - 1)
		i++;
	return ((unsigned char)us1[i] - (unsigned char)us2[i]);
}
