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
	printf("n:%d is positive\n", n);
}
	if (n == 0)
{
	printf("n:%d is zero\n", n);
}
	if (n > 0)
{
	printf("n:%d is negative\n", n);
}
	return (0);
}

