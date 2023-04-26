#include "main.h"
/**
 * printf_srev - is a function that prints a str in reverse
 * @yan: type struct va_arg where is allocated printf arguments
 * Return: the string.
 */
int printf_srev(va_list yan)
{
	char *s = va_arg(yan, char*);
	int i;
	int j = 0;

	if (s == 0)
	{
		s = "(null)";
	}
	while (s[j] != '\0')
	{
		j++;
	}
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (j);
}
