/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:52:14 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/18 15:28:07 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_tab(int *tab, int len)
{
	int i;
 
	i = 0;
	while (len > i)
	{
		printf("tab index[%d] = %d\n", i, tab[i]);
		i++;
	}

}

int	verif_long(const char *str, int i, int signe)
{
	unsigned long long	num;

	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += (str[i++] - '0');
		if (num > 9223372036854775807 && signe < 0)
			return (0);
		else if (num > 9223372036854775807 && signe > 0)
			return (-1);
	}
	return ((int)(num * signe));
}

int	ft_atoi(const char *str)
{
	int	i;
	int	signe;
	int	num;

	signe = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			signe *= -1;
	}
	num = (verif_long(str, i, signe));
	return (num);
}

int check_arg(int argc, char **args)
{
	int i;
	int j;
	 
	j = 1;
	if (argc == 1)
		return (0);
	else
	{
		while (j < argc)
		{
			i = 0;
			while (args[j][i])
			{
				if (!(args[j][i] >= '0' && args[j][i] <= '9') && (args[j][i] != '-'))
					return (0);
				i++;
			}
			j++;
		}
	}
	return (1);
}

int vide_value(int *tab_a, int tab_len)
{
	int ret;
	int i;
	
	i = 0;
	ret = 0;
	while (i < tab_len)
	{
		if (tab_a[i] == ret)
		{
			ret++;
			i = -1;
		}
		i++;
	}
	return (ret);
}