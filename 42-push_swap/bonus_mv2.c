/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_mv2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:21:57 by tmartial          #+#    #+#             */
/*   Updated: 2021/12/01 10:24:23 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(int *tab, int len)
{
	int	i;

	i = 0;
	while (tab[i] != 0 && i < len)
		i++;
	move_front(tab, i - 2);
}

void	rb(int *tab, int len)
{
	int	i;

	i = 0;
	while (tab[i] != 0 && i < len)
		i++;
	move_front(tab, i - 2);
}

void	rr(int *a, int *b, int len)
{
	int	i;

	i = 0;
	while (a[i] != 0 && i < len)
		i++;
	move_front(a, i - 2);
	i = 0;
	while (b[i] != 0 && i < len)
		i++;
	move_front(b, i - 2);
}

void	rra(int *tab, int len)
{
	int	i;

	i = 0;
	while (tab[i] != 0 && i < len)
		i++;
	move_back(tab, i - 2);
}

void	rrb(int *tab, int len)
{
	int	i;

	i = 0;
	while (tab[i] != 0 && i < len)
		i++;
	move_back(tab, i - 2);
}