/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_mv3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:22:00 by tmartial          #+#    #+#             */
/*   Updated: 2021/12/01 13:45:41 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

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
}