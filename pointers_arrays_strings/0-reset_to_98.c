#include <stdio.h>
#include "main.h"

/**
* @n - variavel
* @p - pointeur de i
* Return: 0 
*/
void reset_to_98(int *n)
{
int * ptr_r = &*n;
printf("modif de valeur = '402' %d\n", * ptr_r);
}