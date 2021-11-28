/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_mv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:52:22 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/28 14:06:23 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(int *tab, int len)
{
	if (len >= 2)
	{
		if (tab[0] != 0 && tab[1] != 0)
			swap_pos(tab, 0);
		write(1, "sa\n", 3);
	}
}

void sb(int *tab, int len)
{
	if (len >= 2)
	{
		if (tab[0] != 0 && tab[1] != 0)
			swap_pos(tab, 0);
		write(1, "sb\n", 3);
	}
}

void ss(int *tab_a, int *tab_b, int len)
{
	if (len >= 2)
	{
		if (tab_a[0] != 0 && tab_a[1] != 0)
			swap_pos(tab_a, 0);
		if (tab_b[0] != 0 && tab_b[1] != 0)
			swap_pos(tab_a, 0);
		write(1, "ss\n", 3);
	}
}

void pa(int *tab_a, int *tab_b, int len)
{
	if (tab_b[0] != 0)
	{
		move_back(tab_a, len - 2);
		tab_a[0] = tab_b[0];
		tab_b[0] = 0;
		move_front(tab_b, len - 2);
		write(1, "pa\n", 3);
	}
	
}

void pb(int *tab_a, int *tab_b, int len)
{
	if (tab_a[0] != 0)
	{
		move_back(tab_b, len - 2);
		tab_b[0] = tab_a[0];
		tab_a[0] = 0;
		move_front(tab_a, len - 2);
		write(1, "pb\n", 3);
	}
	
}

void ra(int *tab, int len)
{
	int i;

	i = 0;
	while (tab[i] != 0 && i < len)
		i++;
	move_front(tab, i - 2);
	write(1, "ra\n", 3);
}

void rb(int *tab, int len)
{
	int i;

	i = 0;
	while (tab[i] != 0 && i < len)
		i++;
	move_front(tab, i - 2);
	write(1, "rb\n", 3);
}

void rr(int *tab_a, int *tab_b, int len)
{
	int i;

	i = 0;
	while (tab_a[i] != 0 && i < len)
		i++;
	move_front(tab_a, i - 2);
	i = 0;
	while (tab_b[i] != 0 && i < len)
		i++;
	move_front(tab_b, i - 2);
	write(1, "rr\n", 3);
}

void rra(int *tab, int len)
{
	int i;

	i = 0;
	while (tab[i] != 0 && i < len)
		i++;
	move_back(tab, i - 2);
	write(1, "rra\n", 4);
}

void rrb(int *tab, int len)
{
	int i;

	i = 0;
	while (tab[i] != 0 && i < len)
		i++;
	move_back(tab, i - 2);
	write(1, "rrb\n", 4);
}

void rrr(int *tab_a, int *tab_b, int len)
{
	int i;

	i = 0;
	while (tab_a[i] != 0 && i < len)
		i++;
	move_back(tab_a, i - 2);
	i = 0;
	while (tab_b[i] != 0 && i < len)
		i++;
	move_back(tab_b, i - 2);
	write(1, "rrr\n", 4);
}