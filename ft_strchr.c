/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:51:13 by alienard          #+#    #+#             */
/*   Updated: 2019/10/23 19:59:05 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*us;
	size_t	i;

	us = (char *)s;
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] != (char)c)
		return (NULL);
	return (&us[i]);
}
