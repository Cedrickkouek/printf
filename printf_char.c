#include "main.h"
/**
 * printf_char - prints a char.
 * @yan: arguments.
 * Return: Alway 1
 */
int printf_char(va_list yan)
{
	char s;

	s = va_arg(yan, int);
	_putchar(s);
	return (1);
}
