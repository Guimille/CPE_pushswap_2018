/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** 1
*/

#include<stdlib.h>
#include<stdio.h>
#include"my_pushswap.h"

void my_show_list(t_list **list)
{
  t_list *tmp;

  tmp = *list;
  while (tmp != NULL){
      my_put_nbr(tmp->c);
      my_putchar(' ');
      tmp = tmp->next;
  }
  my_putchar('\n');
}

void swap_list(t_list **l_a, t_list **l_b)
{
  t_list *tmp;
  int i;

  i = 1;
  while (i == 1){
      i = 0;
      tmp = *l_a;
      while ((*l_a)->next != NULL){
          if ((*l_a)->c > (*l_a)->next->c){
	      sa(l_a);
	      i = 1;
          }
	  pb(l_a, l_b);
	  tmp = tmp->next;
      }
      while (*l_b != NULL)
          pa(l_a, l_b);
  }
}

void check_list(t_list **l_a, t_list **l_b, int ac)
{
  t_list *tmp;
  int cpt;
  int i;

  tmp = *l_a;
  i = 0;
  cpt = ac - 2;
  while (tmp->next != NULL && tmp->c < tmp->next->c){
      i++;
      tmp = tmp->next;
    }
  if (i == cpt)
    my_putstr("La liste est déjà triée.\n");
  else
    swap_list(l_a, l_b);
}

t_list *my_put_in_list(t_list *list, int nb)
{
  t_list *elem;
  t_list *tmp;
  elem = malloc(sizeof(t_list));
  elem->c = nb;
  elem->next = NULL;
  if (list == NULL)
    return (elem);
  tmp = list;
  while (tmp->next != NULL)
    tmp = tmp->next;
  tmp->next = elem;
  return (list);
}

int main(int ac, char **av)
{
  t_list *l_a;
  t_list *l_b;
  int i;
  int nb;

  l_a = NULL;
  l_b = NULL;
  i = 0;
  if (ac < 3)
    return (0);
  while (av[++i] != NULL){
      nb = my_getnbr(av[i]);
      l_a = my_put_in_list(l_a, nb);
    }
  check_list(&l_a, &l_b, ac);
  my_putchar('\n');
  return (0);
}
