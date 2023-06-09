#include "main.h"
/**
 * printf_bin - prints a number in the binary form
 * @yan: arguments parsed.
 * Return: Always 1;
 */
int printf_bin(va_list yan)
{
	int check = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(yan, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
		{
			check = 1;
		}
		if (check)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
