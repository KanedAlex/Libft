/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 16:10:17 by alienard          #+#    #+#             */
/*   Updated: 2019/10/24 12:44:51 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	char	*us;
	size_t	i;

	if (!s)
		return (NULL);
	us = (char *)s;
	i = 0;
	if (!(tab = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len && us[i] && start <= ft_strlen(us))
		tab[i++] = us[start++];
	tab[i] = '\0';
	return (tab);
}
