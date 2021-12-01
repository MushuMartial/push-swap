/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:52:04 by tmartial          #+#    #+#             */
/*   Updated: 2021/12/01 17:33:52 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int argc, char **argv)
{
	int	*a;
	int	*b;
	int	len;

	len = mal_len(argc, argv);
	a = malloc(sizeof(int) * len);
	b = malloc(sizeof(int) * len);
	if (a == NULL || b == NULL)
		return (free_stacks(a, b));
	fill_tab(a, argv, argc);
	if (check_double(a, len) == 1)
	{
		write(2, "Error\n", 6);
		return (free_stacks(a, b));
	}
	fill_stacks(a, b, len);
	if (len >= 2 && len <= 5)
		sort_small(a, b, len);
	else if (len > 5 && len <= 700)
		radix(a, b, len);
	else if (len > 700)
		big_sort(a, b, len);
	return (free_stacks(a, b));
}

void	sort_small(int *a, int *b, int len)
{
	if (len == 2)
		algo2(a);
	else if (len == 3)
		algo3(a);
	else if (len == 4)
		algo4(a, b);
	else if (len == 5)
		algo5(a, b);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (check_arg(argv[i]) == 1)
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		if (check_int(argv[i++]) == 1)
		{
			write(2, "Error\n", 6);
			exit(0);
		}
	}
	if (argc > 1)
		push_swap(argc, argv);
}
