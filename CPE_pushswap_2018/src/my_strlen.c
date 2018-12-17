/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** 1
*/

int my_strlen(int *str)
{
  int a;

  a = 0;
  while (str[a] != '\0')
    a = a + 1;
  return (a);
}
