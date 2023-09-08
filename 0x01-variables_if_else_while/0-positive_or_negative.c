# include <stdio.h>
# include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

/* Betty style doc for function */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code */
	if ( n > 0){
		printf("is positive");
	} 
	else if (n == 0){
		printf("is zero");
	} 
	else {
		printf("is negative");
	}
	return (0);
}
