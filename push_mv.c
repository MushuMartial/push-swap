/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_mv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:52:22 by tmartial          #+#    #+#             */
/*   Updated: 2021/12/01 17:16:17 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int *tab, int len)
{
	if (len >= 2)
	{
		if (tab[0] != 0 && tab[1] != 0)
			swap_pos(tab, 0);
		write(1, "sa\n", 3);
	}
}

void	sb(int *tab, int len)
{
	if (len >= 2)
	{
		if (tab[0] != 0 && tab[1] != 0)
			swap_pos(tab, 0);
		write(1, "sb\n", 3);
	}
}

void	ss(int *a, int *b, int len)
{
	if (len >= 2)
	{
		if (a[0] != 0 && a[1] != 0)
			swap_pos(a, 0);
		if (b[0] != 0 && b[1] != 0)
			swap_pos(a, 0);
		write(1, "ss\n", 3);
	}
}

void	pa(int *a, int *b, int len)
{
	if (b[0] != 0)
	{
		move_back(a, len - 2);
		a[0] = b[0];
		b[0] = 0;
		move_front(b, len - 2);
		write(1, "pa\n", 3);
	}
}

void	pb(int *a, int *b, int len)
{
	if (a[0] != 0)
	{
		move_back(b, len - 2);
		b[0] = a[0];
		a[0] = 0;
		move_front(a, len - 2);
		write(1, "pb\n", 3);
	}
}
