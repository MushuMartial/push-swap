/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_mv2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:07:21 by tmartial          #+#    #+#             */
/*   Updated: 2021/12/01 17:03:17 by tmartial         ###   ########.fr       */
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
	write(1, "ra\n", 3);
}

void	rb(int *tab, int len)
{
	int	i;

	i = 0;
	while (tab[i] != 0 && i < len)
		i++;
	move_front(tab, i - 2);
	write(1, "rb\n", 3);
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
	write(1, "rr\n", 3);
}

void	rra(int *tab, int len)
{
	int	i;

	i = 0;
	while (tab[i] != 0 && i < len)
		i++;
	move_back(tab, i - 2);
	write(1, "rra\n", 4);
}

void	rrb(int *tab, int len)
{
	int	i;

	i = 0;
	while (tab[i] != 0 && i < len)
		i++;
	move_back(tab, i - 2);
	write(1, "rrb\n", 4);
}
