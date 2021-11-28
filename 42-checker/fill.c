/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:23:07 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/28 14:19:51 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int mal_len(int argc, char **argv)
{
	int i;
	int len;

	len = argc - 1;
	if (argc == 2)
	{
		i = 0;
		len = 1;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i++] == ' ' && ((argv[1][i] >= '0' && argv[1][i] <= '9') || argv[1][i] == '-' || argv[1][i] >= '+'))
				len++;
		}
	}
	return (len);
}

void fill_tab(int *A, char **argv, int argc)
{
	int i;
	int j;
	int pos;

	j = 0;
	i = 1;
	while (i < argc)
	{
		while (ft_strlen(argv[i]) > 0)
		{
			pos = 0;
			A[j++] = ft_atoi(argv[i], &pos);
			argv[i] += pos;
		}
		i++;
	}
	return ;
}

void fill_stacks(int *A, int *B, int len)
{
	int i;

	i = 0;
	while (i < len)
    {
        B[i] = num_order(A, len, i) + 1;
        i++;
    }
    i = 0;
    while (i < len)
    {
        A[i] = B[i];
        i++;
    }
    i = 0;
    while (i < len)
    {
        B[i] = 0;
        i++;
    }
}