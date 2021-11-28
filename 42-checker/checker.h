#ifndef CHECKER_H
#define CHECKER_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/* Utils */
void checker(int argc, char **argv);
void print_tab(int *tab, int len);
int check_line(char *line, int *A, int *B, int len);
int check_line2(char *line, int *A, int *B, int len);

/* Fill */
int mal_len(int argc, char **argv); //Len of args pour malloc
void fill_tab(int *A, char **argv, int argc); // Rempli stack A
void fill_stacks(int *A, int *B, int len); //Rempli Stacks A et B

/* Checkers */
int	ft_atoi(const char *str, int *pos); //Atoi ds fill_tab
int check_arg(char *args); //Check norm of args
int check_order(int *tab, int len); //Check si tt est trie
int num_order(int *tab, int len, int pos); //Taille du num ds stack
int	check_int(char *str); //Check si int entre max et min
int check_double(int *A, int len); //Check doublon

/* Stack Utils */
void swap_pos(int *tab, int pos); 
void move_back(int *tab, int len); //Deplace la stack de 1 pos pour liberer index[0]
void move_front(int *tab, int len); //Deplace la stack de 1 pos pour liberer index[fin]

/* gnl */
char	*free_all(char *line, char **save, char *buffer, int ret);
int	fill_line(char **line, char **save, char *buffer, int ret);
int	check_save(char **line, char **save);
char	*get_next_line(int fd);
unsigned int	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);
char	*ft_substr(char *s, unsigned int start, size_t len);
unsigned int	pos_n(char *buffer);

/* Stack Moves */
void sa(int *tab, int len);
void sb(int *tab, int len);
void ss(int *tab_a, int *tab_b, int len);
void pa(int *tab_a, int *tab_b, int len);
void pb(int *tab_a, int *tab_b, int len); //A -> B
void ra(int *tab, int len); //first becomes last <-
void rb(int *tab, int len);
void rr(int *tab_a, int *tab_b, int len);
void rra(int *tab, int len); //last becomes first ->
void rrb(int *tab, int len);
void rrr(int *tab_a, int *tab_b, int len);

#endif 