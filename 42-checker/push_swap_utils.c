/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:52:14 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/28 14:20:27 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void print_tab(int *tab, int len)
{
	int i;
 
	i = 0;
	while (len > i)
	{
		printf("tab index[%d] = %d\n", i, tab[i]);
		i++;
	}

}
