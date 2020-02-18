/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:23:30 by alienard          #+#    #+#             */
/*   Updated: 2019/10/12 14:35:54 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int ret;

	i = 0;
	neg = 1;
	ret = 0;
	while (((9 <= str[i] && str[i] <= 13) || str[i] == 32) && str[i])
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i])
	{
		(str[i] == '-') ? neg = -neg : 0;
		i++;
	}
	while (('0' <= str[i] && str[i] <= '9') && str[i])
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(ret * neg));
}
