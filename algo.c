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

void algo2(int *tab, int vide)
{
    if (tab[0] > tab[1])
        sa(tab, 2, vide);
}

void algo3(int *tab, int vide)
{
    if (tab[1] > tab[0] && tab[1] > tab[2])
    {
        rra(tab, 3, vide);
        algo2(tab, vide);
    }
    else if (tab[0] > tab[1] && tab[0] > tab[2])
    {
        ra(tab, 3, vide);
        algo2(tab, vide);
    }
    else
        algo2(tab, vide);
}

void algo4(int *tab_a, int *tab_b, int vide)
{
    if (num_order(tab_a, vide, 4, 0) == 2)
        sa(tab_a, 4, vide);
    if (check_order(tab_a, 4) == 0)  
    {
        pb(tab_a, tab_b, 4, vide);
        algo3(tab_a, vide);
        pa(tab_a, tab_b, 4, vide);
        if (check_order(tab_a, 4) == 0)
        {
            if (tab_a[0] > tab_a[3])
                ra(tab_a, 4, vide);
            else if (tab_a[0] > tab_a[1])
                sa(tab_a, 4, vide);
        }
    }
}

void algo5(int *tab_a, int *tab_b, int vide)
{
    if (num_order(tab_a, vide, 5, 0) == 2 || num_order(tab_a, vide, 5, 0) == 3)
    {
        if (num_order(tab_a, vide, 5, 1) == 2 || num_order(tab_a, vide, 5, 1) == 3 )
            rra(tab_a, 5, vide);
        else
            sa(tab_a, 5, vide);
    }
    pb(tab_a, tab_b, 5, vide);
    algo4(tab_a, tab_b, vide);
    pa(tab_a, tab_b, 5, vide);
    if (check_order(tab_a, 5) == 0)  
    {
        if (tab_a[0] > tab_a[4])
            ra(tab_a, 5, vide);
        else if (tab_a[0] > tab_a[1])
            sa(tab_a, 5, vide);
    }
}