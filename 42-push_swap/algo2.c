/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:45:51 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/29 13:52:45 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	convert_base2(int num)
{
	int	mul;
	int	place;
	int	bin ;

	mul = 0;
	place = 1;
	bin = 0;
	while (num)
	{
		mul = num % 2;
		num = num / 2;
		bin = bin + (mul * place);
		place *= 10;
	}
	return (bin);
}

void	big_sort(int *a, int *b, int len)
{
	int	i;

	i = 1;
	if (check_order(a, len) == 1)
		return ;
	while (len - i > 0)
	{
		while (a[0] != len - (len - i) && a[0] != 0)
			ra(a, len);
		pb(a, b, len);
		i++;
	}
	while (b[0] != 0)
		pa(a, b, len);
}

void	radix(int *a, int *b, int len)
{
	int	i;
	int	div;

	div = 10;
	i = -1;
	if (check_order(a, len) == 1)
		return ;
	while (div <= (convert_base2(len) * 10))
	{
		i = -1;
		while (++i < len)
		{
			if (a[0] % div < 1 * (div / 10))
				pb(a, b, len);
			else
				ra(a, len);
		}
		while (b[0] != 0)
			pa(a, b, len);
		div *= 10;
		if (check_order(a, len) == 1)
			return ;
	}
}
