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
    *a = -4096; *b = 1024;
    *a = INT_MIN; *b = INT_MAX;
}