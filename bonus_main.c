/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:31:19 by tmartial          #+#    #+#             */
/*   Updated: 2021/12/01 17:40:22 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

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
		else if (check_int(argv[i++]) == 1)
		{
			write(2, "Error\n", 6);
			exit(0);
		}
	}
	if (argc >= 2)
		checker(argc, argv);
}

int	check_line(char *line, int *a, int *b, int len)
{
	if (ft_strncmp(line, "sa\n", 3) == 0)
		sa(a, len);
	else if (ft_strncmp(line, "sb\n", 3) == 0)
		sb(b, len);
	else if (ft_strncmp(line, "ss\n", 3) == 0)
		ss(a, b, len);
	else if (ft_strncmp(line, "pa\n", 3) == 0)
		pa(a, b, len);
	else if (ft_strncmp(line, "pb\n", 3) == 0)
		pb(a, b, len);
	else
		return (check_line2(line, a, b, len));
	return (0);
}

int	check_line2(char *line, int *a, int *b, int len)
{
	if (ft_strncmp(line, "ra\n", 3) == 0)
		ra(a, len);
	else if (ft_strncmp(line, "rb\n", 3) == 0)
		rb(b, len);
	else if (ft_strncmp(line, "rr\n", 3) == 0)
		rr(a, b, len);
	else if (ft_strncmp(line, "rra\n", 3) == 0)
		rra(a, len);
	else if (ft_strncmp(line, "rrb\n", 3) == 0)
		rrb(b, len);
	else if (ft_strncmp(line, "rrr\n", 3) == 0)
		rrr(a, b, len);
	else
		return (1);
	return (0);
}

void	checker(int argc, char **argv)
{
	int		*a;
	int		*b;
	int		len;
	char	*line;

	len = mal_len(argc, argv);
	a = malloc(sizeof(int) * len);
	b = malloc(sizeof(int) * len);
	line = malloc(sizeof(char) * 4);
	if (a == NULL || b == NULL || line == NULL)
		return (free_stacks_bonus(a, b, line));
	fill_tab(a, argv, argc);
	if (check_double(a, len) == 1)
	{
		write(2, "Error\n", 6);
		return (free_stacks_bonus(a, b, line));
	}
	fill_stacks(a, b, len);
	read_input(line, a, b, len);
	return (free_stacks(a, b));
}

void	read_input(char *line, int *a, int *b, int len)
{
	while (line != NULL)
	{
		free(line);
		line = get_next_line(0);
		if (line != NULL)
		{
			if (check_line(line, a, b, len) == 1)
			{
				free(line);
				write(2, "Error\n", 6);
				return ;
			}
		}
	}
	free(line);
	if (check_order(a, len) == 1 && b[0] == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
