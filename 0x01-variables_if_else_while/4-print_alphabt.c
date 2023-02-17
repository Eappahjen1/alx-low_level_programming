#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, excluding 'e' and 'q'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
