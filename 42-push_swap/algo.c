/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:46:33 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/22 11:46:33 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void algo2(int *tab)
{
    if (tab[0] > tab[1])
        sa(tab, 2);
}

void algo3(int *tab)
{
    if (tab[1] > tab[0] && tab[1] > tab[2])
    {
        rra(tab, 3);
        algo2(tab);
    }
    else if (tab[0] > tab[1] && tab[0] > tab[2])
    {
        ra(tab, 3);
        algo2(tab);
    }
    else
        algo2(tab);
}

void algo4(int *tab_a, int *tab_b)
{
    if (num_order(tab_a, 4, 0) == 2)
        sa(tab_a, 4);
    if (check_order(tab_a, 4) == 0)  
    {
        pb(tab_a, tab_b, 4);
        algo3(tab_a);
        pa(tab_a, tab_b, 4);
        if (check_order(tab_a, 4) == 0)
        {
            if (tab_a[0] > tab_a[3])
                ra(tab_a, 4);
            else if (tab_a[0] > tab_a[1])
                sa(tab_a, 4);
        }
    }
}

void algo5(int *tab_a, int *tab_b)
{
    if (num_order(tab_a, 5, 0) == 2 || num_order(tab_a, 5, 0) == 3)
    {
        if (num_order(tab_a, 5, 1) == 2 || num_order(tab_a, 5, 1) == 3 )
            rra(tab_a, 5);
        else
            sa(tab_a, 5);
    }
    pb(tab_a, tab_b, 5);
    algo4(tab_a, tab_b);
    pa(tab_a, tab_b, 5);
    if (check_order(tab_a, 5) == 0)  
    {
        if (tab_a[0] > tab_a[4])
            ra(tab_a, 5);
        else if (tab_a[0] > tab_a[1])
            sa(tab_a, 5);
    }
}