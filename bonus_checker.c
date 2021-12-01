/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:31:19 by tmartial          #+#    #+#             */
/*   Updated: 2021/12/01 13:45:18 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int main(int argc, char **argv)
{
	int i;
	
	i = 1;
	if (argc == 1)
		exit(1);
	while (i < argc)
	{
		if (check_arg(argv[i]) == 1)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (check_int(argv[i++]) == 1)
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	checker(argc, argv);
	
}

int check_line(char *line, int *A, int *B, int len)
{
	if (strncmp(line, "sa\n", 3) == 0)
		sa(A, len);
	else if (strncmp(line, "sb\n", 3) == 0)
		sb(B, len);
	else if (strncmp(line, "ss\n", 3) == 0)
		ss(A, B, len);
	else if (strncmp(line, "pa\n", 3) == 0)
		pa(A, B, len);
	else if (strncmp(line, "pb\n", 3) == 0)
		pb(A, B, len);
	else 
		return(check_line2(line, A, B, len));
	return (0);
}

int check_line2(char *line, int *A, int *B, int len)
{
	if (strncmp(line, "ra\n", 3) == 0)
		ra(A, len);
	else if (strncmp(line, "rb\n", 3) == 0)
		rb(B, len);
	else if (strncmp(line, "rr\n", 3) == 0)
		rr(A, B, len);
	else if (strncmp(line, "rra\n", 3) == 0)
		rra(A, len);
	else if (strncmp(line, "rrb\n", 3) == 0)
		rrb(B, len);
	else if (strncmp(line, "rrr\n", 3) == 0)
		rrr(A, B, len);
	else
		return (1);
	return (0);
}

void checker(int argc, char **argv)
{
	int *A;
	int *B;
	int len;
	char *line;
	
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
		write(1, "Error\n", 6);
		return ;
	}
	fill_stacks(A, B, len);
	line = "";
	while (1 && line != NULL)
	{
		line = get_next_line(0);
		if (line != NULL)
		{
			if (check_line(line, A, B, len) == 1)
			{
				write(1, "Error\n", 6);
				return ;
			}
		}
	}
	if (check_order(A, len) == 1 && B[0] == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	exit(0);
}
//0 stdin
//1 stdout