/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:52:04 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/18 16:21:41 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//#include "push_swap_mv.c"
//#include "push_swap_utils.c"

void chose_algo(int *tab_a, int *tab_b, int len, int vide)
{
	if (len == 1)
	{
		printf("tab a: \n");
		print_tab(tab_a, len);
	}
	
}


void push_swap(int tab_len, char **args)
{
	int *tab_a;
	int *tab_b;
	int i;
	int vide;
	
	i = -1;
	tab_a = malloc(sizeof(int) * tab_len);
	tab_b = malloc(sizeof(int) * tab_len);
	while (tab_len > ++i)
		tab_a[i] = ft_atoi(args[i + 1]);
	i = -1;
	vide = vide_value(tab_a, tab_len);
	while (tab_len > ++i)
		tab_b[i] = vide;
	
	printf("tab a: \n");
	print_tab(tab_a, tab_len);
	//printf("tab b: \n");
	//print_tab(tab_b, tab_len);
	// aout 0 1 2  haut de stack = 0 index 0 = top of stack
}

int main(int argc, char **argv)
{
	if (check_arg(argc, argv) == 1)
		push_swap(argc - 1, argv);
	return (0);
}