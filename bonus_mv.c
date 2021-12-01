/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_mv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:21:53 by tmartial          #+#    #+#             */
/*   Updated: 2021/12/01 13:45:35 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	sa(int *tab, int len)
{
	if (len >= 2)
	{
		if (tab[0] != 0 && tab[1] != 0)
			swap_pos(tab, 0);
	}
}

void	sb(int *tab, int len)
{
	if (len >= 2)
	{
		if (tab[0] != 0 && tab[1] != 0)
			swap_pos(tab, 0);
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
	}
}
