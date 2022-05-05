#include "search_algos.h"
/**
 * binary_search  - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array:  is a pointer to the first element of the array to search in.
 * @size: is the number of elements in array.
 * @value: is the value to search for.
 * Return: index  or -1 if value not present in array or is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_arr(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

void print_arr(int *array, int left, int right)
{
	printf("Searching in array: ");
	for ( ; left < right; left++)
	{
		printf("%d, ", array[left]);
	}
	printf("%d\n", array[left]);
}
