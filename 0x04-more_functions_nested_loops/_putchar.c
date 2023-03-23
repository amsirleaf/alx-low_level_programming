#include "main.h"
#include<unistd.h>
/**
 * _putchar -writes the character c to stdout
 * @c: The character to pont
 *
 * Return: On success1.
 * On error; -1 is returned; and ermo is set approriately.
 */
int_putchar(char c)
{
	return(write(1, &c, 1));
}
