/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:37:52 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/25 16:37:52 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void radix(int *A, int *B, int len, int vide)
{
    int i;

    i = 0;
    while (i < len)
    {
        B[i] = num_order(A, vide, len, i) + 1;
        i++;
    }
    i = 0;
    while (i < len)
    {
        A[i] = convert_base2(B[i]);
        i++;
    }
    i = 0;
    while (i < len)
    {
        B[i] = 0;
        i++;
    }
}

int convert_base2(int num)
{
    int rem = 0;
    int place = 1;
    int  bin = 0;

    while (num)
    {
        rem = num % 2;
        num = num / 2;
        bin = bin + (rem * place);
        place *= 10;
    }
    return (bin);
}