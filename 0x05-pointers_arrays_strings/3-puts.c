#include "main.h"
/**
 * puts - print a string, followed by a new line, to sidout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str !='0')
	{
		_putchar(*str++);
	}
	        _putchar('\n');
}
