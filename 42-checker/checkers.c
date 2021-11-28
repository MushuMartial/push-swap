/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:23:26 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/28 14:18:55 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_atoi(const char *str, int *pos)
{
	int	signe;
	int	num;
	int i;

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

int check_arg(char *args)
{
	int i;
	 
	i = -1;
	while (args[++i] != '\0')
	{
		if ((args[i] >= '0' && args[i] <= '9') || args[i] == '-' || args[i] == ' ' || args[i] == '+')
		{
			if (args[i] == '-' || args[i] == '+')
			{
				if (!(args[i + 1] >= '0' && args[i + 1] <= '9'))
					return (1);
				if (i != 0)
				{
					if (args[i - 1] != ' ')
						return (1);
				}	
			}
		}
		else
			return (1);
	}	
	return (0);
}

int check_order(int *tab, int len)
{
	int i;

	i = 0;
	while (i < len - 1)
	{
		if (tab[i] > tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int num_order(int *tab, int len, int pos)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] != 0 && i < len)
	{
		if (tab[pos] > tab[i])
			j++;
		i++;
	}
	return (j);
}

int	check_int(char *str)
{
	long long int	num;
	int i;
	int signe;

	i = 0;
	signe = 1;
	while (str[i] != '\0')
	{
		num = 0;
		if (str[i] == '-')
			signe = -1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			num = (num * 10) + (str[i++] - '0');
			if (num > 2147483647 && signe == 1)
				return (1);
			else if (num > 2147483648 && signe == -1)
				return (1);
		}
		if (str[i] == ' ')
			signe = 1;
		i++;
	}
	return (0);
}

int check_double(int *A, int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < len)
	{
		while (i < len)
		{
			if (A[j] == A[i] && i != j)
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}