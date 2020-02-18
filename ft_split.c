/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:23:17 by alienard          #+#    #+#             */
/*   Updated: 2019/10/17 15:11:51 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(char const *s, char c)
{
	size_t count;
	size_t i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && s[i + 1] == c)
			count++;
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

size_t	ft_lenw(const char *s, char c)
{
	size_t		len;

	len = 0;
	while (*s != '\0')
	{
		if (*s == c && len == 0)
			s++;
		if (*s != c)
		{
			len++;
			s++;
		}
		if (*s == c && len > 0)
			return (len);
	}
	return (len);
}

size_t	ft_next(const char *s, size_t x, char c)
{
	if (c == '\0')
		return (0);
	while (s[x] && s[x] == c)
		x++;
	return (x);
}

char	**ret_nul(void)
{
	char **tab;

	if (!(tab = (char **)malloc(sizeof(char*) * 1)))
		return (NULL);
	tab[0] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	x;
	size_t	y;
	size_t	len;
	size_t	n;

	if (!s || s[0] == 0)
		return (ret_nul());
	x = ft_next(s, 0, c);
	n = 0;
	if (!(tab = (char **)malloc(sizeof(char*) * (ft_count(s, c) + 1))))
		return (NULL);
	while (s[x])
	{
		y = 0;
		len = ft_lenw(&s[x], c);
		if (!(tab[n] = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		while (y < len)
			tab[n][y++] = s[x++];
		tab[n++][y] = 0;
		c != '\0' ? x = ft_next(s, x, c) : 0;
	}
	tab[n] = 0;
	return (tab);
}
