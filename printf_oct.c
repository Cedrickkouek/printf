#include "main.h"
/**
 * printf_oct - prints an octal number.
 * @yan: arguments
 * Return: Counter
 */
int printf_oct(va_list yan)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(yan, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = counter - 1; i >= 0; i++)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
