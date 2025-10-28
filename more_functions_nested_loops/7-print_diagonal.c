#include "main.h"

/**
* print_diagonal - desenha uma linha diagonal no terminal
* @n: número de linhas da diagonal
*
* Retorno: nada (void)
*/
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
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
