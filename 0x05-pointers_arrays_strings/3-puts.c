#include "main.h"
/**
* _puts - prints string followed by a newline
*
* @str: a string variable to a string value
*
*
*/
void _puts(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
