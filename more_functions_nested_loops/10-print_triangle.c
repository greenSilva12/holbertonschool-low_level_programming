#include "main.h"

/**
* print_triangle - imprime um triângulo com o caractere #
* @size: tamanho do triângulo
*
* Return: void
*/
void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
	_putchar('\n');
	return;
}

for (i = 1; i <= size; i++)
{
	/* imprime os espaços */
	for (j = i; j < size; j++)
		_putchar(' ');

	/* imprime os # */
	for (j = 1; j <= i; j++)
		_putchar('#');

	_putchar('\n');
}
}
