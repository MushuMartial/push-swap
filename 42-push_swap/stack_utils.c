/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:23:17 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/29 11:23:22 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_pos(int *tab, int pos)
{
	int	save;

	save = tab[pos];
	tab[pos] = tab[pos + 1];
	tab[pos + 1] = save;
}

void	move_back(int *tab, int len)
{
	int	i;

	i = len;
	while (i >= 0)
	{
		swap_pos(tab, i);
		i--;
	}
}

void	move_front(int *tab, int len)
{
	int	i;

	i = 0;
	while (len >= i)
	{
		swap_pos(tab, i);
		i++;
	}	
}
