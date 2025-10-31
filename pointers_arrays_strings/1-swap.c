#include <stdio.h>
#include "main.h"

/**
* @a - variavel
* @b - pointeur
* @swap_int - funcao
* Return: 0
*/
void swap_int(int *a, int *b)
{
    *a = 42; *b = 98;
    printf("a=%d, b=%d\n", a, b);
}