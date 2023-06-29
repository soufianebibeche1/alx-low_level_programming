#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array.
 *
 * Description: A function that reverses the content of an array of integers.
 *
 * @n: The lngth of the array.
 *
 * @a: the array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}

}
