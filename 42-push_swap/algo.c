/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:45:57 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/29 13:45:30 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo2(int *tab)
{
	if (tab[0] > tab[1])
		sa(tab, 2);
}

void	algo3(int *tab)
{
	if (tab[1] > tab[0] && tab[1] > tab[2])
	{
		rra(tab, 3);
		algo2(tab);
	}
	else if (tab[0] > tab[1] && tab[0] > tab[2])
	{
		ra(tab, 3);
		algo2(tab);
	}
	else
		algo2(tab);
}

void	algo4(int *a, int *b)
{
	if (num_order(a, 4, 0) == 2)
		sa(a, 4);
	if (check_order(a, 4) == 0)
	{
		pb(a, b, 4);
		algo3(a);
		pa(a, b, 4);
		if (check_order(a, 4) == 0)
		{
			if (a[0] > a[3])
				ra(a, 4);
			else if (a[0] > a[1])
				sa(a, 4);
		}
	}
}

void	algo5(int *a, int *b)
{
	if (check_order(a, 5) == 1)
		return ;
	if (num_order(a, 5, 0) == 2 || num_order(a, 5, 0) == 3)
	{
		if (num_order(a, 5, 1) == 2 || num_order(a, 5, 1) == 3)
			rra(a, 5);
		else
			sa(a, 5);
	}
	pb(a, b, 5);
	algo4(a, b);
	pa(a, b, 5);
	if (check_order(a, 5) == 0)
	{
		if (a[0] > a[4])
			ra(a, 5);
		else if (a[0] > a[1])
			sa(a, 5);
	}
}
