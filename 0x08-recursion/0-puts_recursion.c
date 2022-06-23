<<<<<<< HEAD
#include "main.h"

/**
 *_puts_recursion - prints a string
 *@s: pointer block of memory to fill
 *Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar (*s);
	_puts_recursion(s + 1);
}
=======
#include "main.h"

/**
 * _puts_recursion - print a string.
 * @s: pointer to char
 * Return: No.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
>>>>>>> 6fe53eda91e4c10f547f4a15e0e45285e2be139c
