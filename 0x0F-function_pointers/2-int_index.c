#include <stdio.h>
#include "function_pointers.h"

int is_even(int num)
{
	return (num % 2 == 0);
}

int main(void)
{
	int array[] = {1, 3, 5, 8, 10, 15};
	int size = sizeof(array) / sizeof(array[0]);

	int index = int_index(array, size, is_even);

	if (index != -1)
	{
		printf("First even number is at index %d\n", index);
	}
	else
	{
		printf("No even number found\n");
	}

	return (0);
}
