#include "main.h"

/**
* print_alphabet - print de alphabet in lowercase
*
* Return: zero if true
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
