# include "main.h"

/**
 * puts2 - prints every character on even position
 * @str: Is a pointer that is assigned
 */
void puts2(char *str)
{
	int position = 0;

	while (str[position] != '\0')
	{
		if (position % 2 == 0)
		{
			_putchar(str[position]);
		}
		position++;
	}
	_putchar('\n');
}
