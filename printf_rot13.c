#include "main.h"
/**
 * printf_rot13 - printf string to ROT13 place into buffer
 * @yan: type struc va_arg where is allocated printf arguments.
 * Return: Counter
 */
int printf_rot13(va_list yan)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(yan, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; alpha[j] && !k; j++)
		{
			if (s[i] == alpha[j])
			{
				_putchar(beta[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
