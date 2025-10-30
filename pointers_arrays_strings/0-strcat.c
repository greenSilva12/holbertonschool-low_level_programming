#include "main.h"
/* 
* char - variavel
* str - funçao 
* Return: 0
*/
char *_strncat(char *dest, char *src);
{
	char dest[20] = "Hello";
char src[] = "World";
strncat(dest, src, 3);
printf("%s\n", dest); // Output: Hello World
return 0;
}