/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** functions
*/

#include<stdlib.h>
#include"my_pushswap.h"

t_list *my_add_in_list(t_list *list, int nb)
{
    t_list *tmp;

    tmp = malloc(sizeof(t_list));
    list = tmp;
    tmp->next = list;
    tmp->c = nb;
    return (list);
}

void pb(t_list **l_a, t_list **l_b)
{
    int nb; 
    if (*l_a == NULL)
        return;
    nb = (*l_a)->c;
    *l_b = my_add_in_list(*l_b, nb);
    *l_a = (*l_a)->next;
    my_putstr("pb ");
}

void pa(t_list **l_a, t_list **l_b)
{
    int nb;

    if (*l_b == NULL)
        return;
    nb = (*l_b)->c;
    *l_a = my_add_in_list(*l_a, nb);
    *l_b = (*l_b)->next;
    my_putstr("pa ");
}

void sa(t_list **l_a)
{
    t_list *tmp;
    
    tmp = *l_a;
    tmp = tmp->next;
    (*l_a)->next = tmp->next;
    tmp->next = *l_a;
    *l_a = tmp;
    my_putstr("sa ");
}