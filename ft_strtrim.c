/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:49:36 by alienard          #+#    #+#             */
/*   Updated: 2019/10/24 16:09:49 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_isset(char str, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == str)
			return (1);
		i++;
	}
	return (0);
}

char	*j_pos(void)
{
	char *str;

	if (!(str = (char *)malloc(sizeof(char) * 1)))
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	tmp;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && ft_isset(s1[i], set) == 1)
		i++;
	j = ft_strlen(s1);
	j > 0 ? j-- : 0;
	while (j != 0 && ft_isset(s1[j], set) == 1)
		j--;
	if (j == 0 && ft_isset(s1[j], set) == 1)
		return (j_pos());
	if (!(str = (char *)malloc(sizeof(char) * ((j - i) + 2))))
		return (NULL);
	tmp = 0;
	while (i <= j)
		str[tmp++] = s1[i++];
	str[tmp] = '\0';
	return (str);
}
