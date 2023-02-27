#include "main.h"
/**
* _strlen - calculates the lenght of string
*
* @s: points to the address and stores the length
*
* Return: length
*/
int _strlen(char *s)
{
int i;
int length = 0;
for (i = 0; s[i] != '\0'; i++)
{
length++;
}
return (length);
}
