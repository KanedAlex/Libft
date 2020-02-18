/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:09:15 by alienard          #+#    #+#             */
/*   Updated: 2019/10/23 20:22:17 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*us;
	size_t	len;

	us = (char *)s;
	len = ft_strlen(us);
	while (len != 0 && us[len] != c)
		len--;
	if (us[len] != c)
		return (NULL);
	return (&us[len]);
}
