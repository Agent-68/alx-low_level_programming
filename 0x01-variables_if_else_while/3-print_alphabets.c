#include <stdio.h>

/**
 *main - print lowercase and uppercase a-zA-Z using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*print lowercases a-z */
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')/*print upper*/
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
