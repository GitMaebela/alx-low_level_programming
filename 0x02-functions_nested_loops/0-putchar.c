#include "main.h"

/**
* main - _putchar, followed by a new line.
*
* Return: zero if true
*/
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; c[i] != 00 ; i++)
	{
		_putchar (c[i]);
	}

_putchar('\n');

return (0);

}
