#include "main.h"

/**
 * _put - the  Entry function
 * @str: the string to be printed
 * Return: nothing
 */
void _puts(char *str)
{	while (*str != '\0')
	{
		_putchar(*str);
	}	str++;
}
