/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:52:14 by tmartial          #+#    #+#             */
/*   Updated: 2021/12/02 16:39:32 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

int	ft_atoi(const char *str, int *pos)
{
	int	signe;
	int	num;
	int	i;

	signe = 1;
	num = 0;
	i = -1;
	while (str[++i] == 32)
		(*pos)++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			signe *= -1;
		(*pos)++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i++] - '0');
		(*pos)++;
	}
	return (num * signe);
}

int	check_empty(char *args)
{
	int	i;

	i = 0;
	if (ft_strlen(args) == 0)
		return (1);
	while (args[i] != '\0')
	{
		if (args[i++] != ' ')
			return (0);
	}
	return (1);
}
