#include "main.h"

/**
*
*/
void print_square(int size);
{
	int i, j;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}
	
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
		_putchar(' ');
	
	_putchar('\\');
	_putchar('\n');
	}
}
