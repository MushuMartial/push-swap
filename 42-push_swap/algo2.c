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

int convert_base2(int num)
{
    int mul = 0;
    int place = 1;
    int  bin = 0;

    while (num)
    {
        mul = num % 2;
        num = num / 2;
        bin = bin + (mul * place);
        place *= 10;
    }
    return (bin);
}

void big_sort(int *A, int *B, int len)
{
    int i;

    i = 1;
    while (len - i > 0)
    {
        while (A[0] != len - (len - i) && A[0] != 0)
            ra(A, len);
        pb(A, B, len);
        i++;
    }
    while (B[0] != 0)
        pa(A, B, len);
}

void radix(int *A, int *B, int len)
{
    int i;
    int div;

    div = 10;
    i = -1;
    while (++i < len)
        A[i] = convert_base2(A[i]);
    while (div <= (convert_base2(len) * 10))
    {
        i = -1;
        while (++i < len)
        {
            if (A[0] % div < 1 * (div / 10))
                pb(A, B, len);
            else
                ra(A, len);
        }
        while (B[0] != 0)
            pa(A, B, len);
        div *= 10;
        if (check_order(A, len) == 1)
            return ;
    }
}