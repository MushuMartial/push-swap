/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_mv3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 17:13:17 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/29 13:10:58 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(int *a, int *b, int len)
{
	int	i;

	i = 0;
	while (a[i] != 0 && i < len)
		i++;
	move_back(a, i - 2);
	i = 0;
	while (b[i] != 0 && i < len)
		i++;
	move_back(b, i - 2);
	write(1, "rrr\n", 4);
}
