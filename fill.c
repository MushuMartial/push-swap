/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:23:07 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/29 14:39:27 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	mal_len(int argc, char **argv)
{
	int	i;
	int	len;
	int	j;

	j = 1;
	len = 0;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			if (argv[j][i++] == ' ' && ((argv[j][i] >= '0' && argv[j][i] <= '9')
			|| argv[j][i] == '-' || argv[j][i] == '+'))
				len++;
		}
		j++;
		len++;
	}
	return (len);
}

void	fill_tab(int *a, char **argv, int argc)
{
	int	i;
	int	j;
	int	pos;

	j = 0;
	i = 1;
	while (i < argc)
	{
		while (ft_strlen(argv[i]) > 0)
		{
			pos = 0;
			a[j++] = ft_atoi(argv[i], &pos);
			argv[i] += pos;
		}
		i++;
	}
	return ;
}

void	fill_stacks(int *a, int *b, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		b[i] = num_order(a, len, i) + 1;
		i++;
	}
	i = 0;
	while (i < len)
	{
		if (len > 5 && len <= 700)
			a[i] = convert_base2(b[i]);
		else
			a[i] = b[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		b[i] = 0;
		i++;
	}
}
