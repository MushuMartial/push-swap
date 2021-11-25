/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:52:04 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/25 19:10:14 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//#include "push_swap_mv.c"
//#include "push_swap_utils.c"
//#include "algo.c"
//#include "algo2.c"
//#include "fill.c"
//#include "stack_utils.c"
//#include "checker.c"

void push_swap(int argc, char **argv)
{
	int *A;
	int *B;
	int len;
	
	len = mal_len(argc, argv);
	A = malloc(sizeof(int) * len);
	B = malloc(sizeof(int) * len);
	if (A == NULL || B == NULL)
		return ;
	fill_tab(A, argv, argc);
	if (check_double(A, len) == 1)
	{
		free(A);
		free(B);
		printf("Error\n");
		return ;
	}
	fill_stacks(A, B, len);
	
	if (len == 2)
		algo2(A, 0);
	else if (len == 3)
		algo3(A, 0);
	else if (len == 4)
		algo4(A, B, 0);
	else if (len == 5)
		algo5(A, B, 0);
	else if (len > 5)
		radix(A, B, len);
	
	free(A);
	free(B);
	return;
}


int main(int argc, char **argv)
{
	int i;
	
	i = 1;
	while (i < argc)
	{
		if (check_arg(argv[i]) == 1)
		{
			printf("Error\n");
			return (0);
		}
		if (check_int(argv[i++]) == 1)
		{
			printf("Error\n");
			return (0);
		}
	}
	push_swap(argc, argv);
	return (0);
}