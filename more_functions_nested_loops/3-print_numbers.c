#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * You can only use _putchar twice
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
    putchar(i + '0');
	_putchar('\n');
}
