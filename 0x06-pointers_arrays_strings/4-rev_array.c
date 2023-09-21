# include "main.h"

/**
 * reverse_array - A function that prints string in reverse
 * @a: A pointer assigned
 * @n: an integer assigned
 */
void reverse_array(int *a, int n)
{
	int left = 0;
	int right = n - 1;

	while (left < right)
	{
		int temp = a[left];

		a[left] = a[right];
		a[right] = temp;
		left++;
		right--;
	}
}
