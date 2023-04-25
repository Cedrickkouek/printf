#include "main.h"
/**
 * printf_string - print a string.
 * @yan: argument passed
 * Return: The length of the string.
 */
int printf_string(va_list yan)
{
	char *s;
	int i, len;

	s = va_arg(yan, char *);
	if (s == NULL)
	{
		s = "(NULL)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
}
