#include "main.h"
/**
 * _isdigit - numeros.
 * @c: numbers.
 * Return: depends.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
