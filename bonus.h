/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmartial <tmartial@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 13:59:18 by tmartial          #+#    #+#             */
/*   Updated: 2021/12/02 16:34:37 by tmartial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

/* Utils */
int		ft_strlen(const char *s);
int		ft_atoi(const char *str, int *pos); //Atoi ds fill_tab
int		check_empty(char *args);

/* Fill */
int		mal_len(int argc, char **argv); //Len of args pour malloc
void	fill_tab(int *a, char **argv, int argc); // Rempli stack A
void	fill_stacks(int *a, int *b, int len); //Rempli Stacks A et B
int		convert_base2(int num);

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
void	free_stacks(int *a, int *b);

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

/* Bonus */
int		check_line(char *line, int *a, int *b, int len);
int		check_line2(char *line, int *a, int *b, int len);
void	checker(int argc, char **argv);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);
char	*ft_substr(char *s, int start, int len);
int		pos_n(char *buffer);
char	*free_all(char *line, char **save, char *buffer, int ret);
int		fill_line(char **line, char **save, char *buffer, int ret);
int		check_save(char **line, char **save);
char	*get_next_line(int fd);
void	read_input(char *line, int *a, int *b, int len);
int		ft_strncmp(char *s1, char *s2, int n);
void	free_stacks_bonus(int *a, int *b, char *line); //in gnl.c

#endif