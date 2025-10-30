#include "main.h"
/* 
*
*/
char *_strncat(char *dest, char *src, int n);
{
    int i;
    int j;
    char dest[20] = "Hello";
char src[] = "World";
strncat(dest, src, 3);
printf("%s\n", dest); 
return 0;
}