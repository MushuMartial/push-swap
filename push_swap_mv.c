/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_mv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:52:22 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/19 14:04:00 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(int *tab, int len, int vide)
{
	if (len >= 2)
	{
		if (tab[0] != vide && tab[1] != vide)
			swap_pos(tab, 0);
		printf("sa\n");
	}
}

void sb(int *tab, int len, int vide)
{
	if (len >= 2)
	{
		if (tab[0] != vide && tab[1] != vide)
			swap_pos(tab, 0);
		printf("sb\n");
	}
}

void ss(int *tab_a, int *tab_b, int len, int vide)
{
	if (len >= 2)
	{
		if (tab_a[0] != vide && tab_a[1] != vide)
			swap_pos(tab_a, 0);
		if (tab_b[0] != vide && tab_b[1] != vide)
			swap_pos(tab_a, 0);
		printf("ss\n");
	}
}

void pa(int *tab_a, int *tab_b, int len, int vide)
{
	if (tab_b[0] != vide)
	{
		move_back(tab_a, len - 2);
		tab_a[0] = tab_b[0];
		tab_b[0] = vide;
		move_front(tab_b, len - 2);
		printf("pa\n");
	}
	
}

void pb(int *tab_a, int *tab_b, int len, int vide)
{
	if (tab_a[0] != vide)
	{
		move_back(tab_b, len - 2);
		tab_b[0] = tab_a[0];
		tab_a[0] = vide;
		move_front(tab_a, len - 2);
		printf("pb\n");
	}
	
}

void ra(int *tab, int len, int vide)
{
	int i;

	i = 0;
	while (tab[i] != vide && i < len)
		i++;
	move_front(tab, i - 2);
	printf("ra\n");
}

void rb(int *tab, int len, int vide)
{
	int i;

	i = 0;
	while (tab[i] != vide && i < len)
		i++;
	move_front(tab, i - 2);
	printf("rb\n");
}

void rr(int *tab_a, int *tab_b, int len, int vide)
{
	int i;

	i = 0;
	while (tab_a[i] != vide && i < len)
		i++;
	move_front(tab_a, i - 2);
	i = 0;
	while (tab_b[i] != vide && i < len)
		i++;
	move_front(tab_b, i - 2);
	printf("rr\n");
}

void rra(int *tab, int len, int vide)
{
	int i;

	i = 0;
	while (tab[i] != vide && i < len)
		i++;
	move_back(tab, i - 2);
	printf("rra\n");
}

void rrb(int *tab, int len, int vide)
{
	int i;

	i = 0;
	while (tab[i] != vide && i < len)
		i++;
	move_back(tab, i - 2);
	printf("rrb\n");
}

void rrr(int *tab_a, int *tab_b, int len, int vide)
{
	int i;

	i = 0;
	while (tab_a[i] != vide && i < len)
		i++;
	move_back(tab_a, i - 2);
	i = 0;
	while (tab_b[i] != vide && i < len)
		i++;
	move_back(tab_b, i - 2);
	printf("rrr\n");
}