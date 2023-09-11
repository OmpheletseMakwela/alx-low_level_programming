# include <stdio.h>

/**
 * main - entry point
 *
 * return 0 (success)
 */
int main(void)
{
	 int i, j;

    for (i = 0; i <= 9; i++) {
        for (j = i; j <= 9; j++) {
            if (i != j) {
                putchar('0' + i);
                putchar('0' + j);

                if (i != 8 || j != 9) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');
    return 0;
}
