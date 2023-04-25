#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: Is the character to print.
 * Return: On Success 1 and -1 on error..
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
