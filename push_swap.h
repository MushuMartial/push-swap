/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:52:31 by tmartial          #+#    #+#             */
/*   Updated: 2021/11/25 18:03:20 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

/* Utils */
void push_swap(int argc, char **argv);
void print_tab(int *tab, int len);
int	ft_strlen(const char *s);

/* Fill */
int mal_len(int argc, char **argv); //Len of args pour malloc
void fill_tab(int *A, char **argv, int argc); // Rempli stack A
void fill_stacks(int *A, int *B, int len); //Rempli Stacks A et B

/* Checkers */
int	ft_atoi(const char *str, int *pos); //Atoi ds fill_tab
int check_arg(char *args); //Check norm of args
int check_order(int *tab, int len); //Check si tt est trie
int num_order(int *tab, int vide, int len, int pos); //Taille du num ds stack
int	check_int(char *str); //Check si int entre max et min
int check_double(int *A, int len); //Check doublon

/* Stack Utils */
void swap_pos(int *tab, int pos); 
void move_back(int *tab, int len); //Deplace la stack de 1 pos pour liberer index[0]
void move_front(int *tab, int len); //Deplace la stack de 1 pos pour liberer index[fin]

/* Algo */
void algo2(int *tab, int vide);
void algo3(int *tab, int vide);
void algo4(int *tab_a, int *tab_b, int vide);
void algo5(int *tab_a, int *tab_b, int vide);

/* Algo 2 */
void radix(int *A, int *B, int len, int vide);
int convert_base2(int num);

/* Stack Moves */
void sa(int *tab, int len, int vide);
void sb(int *tab, int len, int vide);
void ss(int *tab_a, int *tab_b, int len, int vide);
void pa(int *tab_a, int *tab_b, int len, int vide);
void pb(int *tab_a, int *tab_b, int len, int vide); //A -> B
void ra(int *tab, int len, int vide); //first becomes last <-
void rb(int *tab, int len, int vide);
void rr(int *tab_a, int *tab_b, int len, int vide);
void rra(int *tab, int len, int vide); //last becomes first ->
void rrb(int *tab, int len, int vide);
void rrr(int *tab_a, int *tab_b, int len, int vide);

# endif