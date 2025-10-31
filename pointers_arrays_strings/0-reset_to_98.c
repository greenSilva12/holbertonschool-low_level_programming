#include <stdio.h>
#include "main.h"

/**
* @n - variavel
* @p - pointeur de i
* Return: 0 
*/
void reset_to_98(int *n)
{
int a = "402";
int *n = &a;
*n = 98;
printf("n = %d\n", a);
}