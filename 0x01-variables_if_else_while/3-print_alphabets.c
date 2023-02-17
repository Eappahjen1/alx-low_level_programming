#include<stdio.h>

/**
 * main - prints the alphabet in lowercase then uppercase, & a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
