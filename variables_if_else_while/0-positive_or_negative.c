#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - the principal function
* if - condition
* printf - print "n:avec les possibilites"
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
{
	printf("n:%dis positive\n", n);
}
	if (n == 0)
{
	printf("n:%dis zero\n", n);
}
	if (n > 0)
{
	printf("n:%dis negative\n", n);
}
	return (0);
}

