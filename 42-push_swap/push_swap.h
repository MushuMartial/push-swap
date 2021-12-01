/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:52:31 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/30 10:56:15 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

/* Utils */
void	push_swap(int argc, char **argv);
int		ft_strlen(const char *s);
int		ft_atoi(const char *str, int *pos); //Atoi ds fill_tab
void	free_stacks(int *a, int *b);
void	sort_small(int *a, int *b, int len);

/* Fill */
int		mal_len(int argc, char **argv); //Len of args pour malloc
void	fill_tab(int *a, char **argv, int argc); // Rempli stack A
void	fill_stacks(int *a, int *b, int len); //Rempli Stacks A et B

/* Checkers */
int		check_arg(char *args); //Check norm of args
int		check_order(int *tab, int len); //Check si tt est trie
int		num_order(int *tab, int len, int pos); //Taille du num ds stack
int		check_int(char *str); //Check si int entre max et min
int		check_double(int *a, int len); //Check doublon

/* Stack Utils */
void	swap_pos(int *tab, int pos);
void	move_back(int *tab, int len); //Deplace la stack de 1 to free [0]
void	move_front(int *tab, int len); //Deplace la stack de 1 to free [fin]

/* Algo */
void	algo2(int *tab);
void	algo3(int *tab);
void	algo4(int *a, int *b);
void	algo5(int *a, int *b);

/* Algo 2 */
void	radix(int *a, int *b, int len);
int		convert_base2(int num);
void	big_sort(int *a, int *b, int len);

/* Stack Moves */
void	sa(int *tab, int len);
void	sb(int *tab, int len);
void	ss(int *a, int *b, int len);
void	pa(int *a, int *b, int len);
void	pb(int *a, int *b, int len); //A -> B
void	ra(int *tab, int len); //first becomes last <-
void	rb(int *tab, int len);
void	rr(int *a, int *b, int len);
void	rra(int *tab, int len); //last becomes first ->
void	rrb(int *tab, int len);
void	rrr(int *a, int *b, int len);

#endif