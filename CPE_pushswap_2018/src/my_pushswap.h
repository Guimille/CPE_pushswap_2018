/*
** EPITECH PROJECT, 2018
** header my_pushswap
** File description:
** 1
*/

#ifndef MY_PUSHSWAP_H_
# define MY_PUSHSWAP_H_

typedef struct s_list
{
  int c;
  struct s_list *next;
} t_list;

#endif /* !MY_PUSHSWAP_H_ */

int	my_getnbr(char *str);
int	my_put_nbr(int nb);
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(int *str);
int	my_swap(int *a, int *b);
void	sa(t_list **l_a);
void	pb(t_list **, t_list **);
void	pa(t_list **, t_list **);
