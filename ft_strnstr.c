/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:05:17 by alienard          #+#    #+#             */
/*   Updated: 2019/11/26 19:29:24 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needlelen;

	needlelen = ft_strlen(needle);
	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (len > i && haystack[i])
	{
		if (ft_strncmp(&haystack[i], needle, needlelen) == 0
				&& i + needlelen <= len)
			return ((char *)(&haystack[i]));
		i++;
	}
	return (NULL);
}
