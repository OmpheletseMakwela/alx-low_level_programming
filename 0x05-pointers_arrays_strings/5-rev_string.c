# include "main.h"
# include <string.h>

/**
 * rev_string - A prototype function that writes a string in reverse
 * @s: A pointer that is assigned
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
