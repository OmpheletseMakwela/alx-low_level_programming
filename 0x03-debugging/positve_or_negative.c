# include <stdio.h>
# include "main.h"

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positve", i);
	else if (i == 0)
		printf("%d is zero", i);
	else (i < 0)
		printf("%d is negative", i);
}
