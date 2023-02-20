#include <stdio.h>

/**
*main - prints hexadecimal base 0123456789abcdef, using putchar
*Return: Always 0 (Success)
*/

int main(void)
{
	int n = '0';
	int f = 'a';

	while (n <= '9') /*print to 9 */
	{
		putchar(n);
		n++;
	}

	while (f <= 'f') /*print to f */
	{
		putchar(f);
		f++;
	}
	putchar('\n');

	return (0);
}	
