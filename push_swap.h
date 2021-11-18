/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:52:31 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/18 15:27:51 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void push_swap(int argc, char **args);
void print_tab(int *tab, int len);
int	verif_long(const char *str, int i, int signe);
int	ft_atoi(const char *str);
int check_arg(int argc, char **args);
int vide_value(int *tab_a, int tab_len);

# endif