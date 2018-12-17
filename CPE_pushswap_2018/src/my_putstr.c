/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** 1
*/

#include "my_pushswap.h"

void my_putstr(char *str)
{
  int a;

  a = 0;
  while (str[a] != '\0'){
      my_putchar(str[a]);
      a++;
    }
}
