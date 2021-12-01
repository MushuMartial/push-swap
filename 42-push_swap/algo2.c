/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:45:51 by tmartial          #+#    #+#             */
/*   Updated: 2021/12/01 13:51:49 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
