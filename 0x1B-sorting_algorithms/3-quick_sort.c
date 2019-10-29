#include "sort.h"
/**
 *partition - Partition for the quicksort using the Lomuto scheme
 *@array: array to sort
 *@low: Lowest index of the partition
 *@high: highest index of the partition
 *@size: size of the array
 *Return: position where the partition was made
 */
size_t partition(int *array, int low, int high, size_t size)
{
	int i, n;
	int  swap, d;

	d = array[high];
	i = low - 1;
	for (n = low; n < high; n++)
	{
		if (array[n] < d)
		{
			i++;
			if (i != n)
			{
				swap = array[i];
				array[i] = array[n];
				array[n] = swap;
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[i + 1])
	{
		swap = array[i + 1];
		array[i + 1] = array[high];
		array[high] = swap;
		print_array(array, size);
	}
	return (i + 1);
}
/**
 *quicksort - Sort a partition of an array integer
 *@array: array to sort.
 *@low: index of the partition.
 *@high: highest indes of the partition function sort.
 *@size: size of the array.
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int d;

	if (low < high)
	{
		d = partition(array, low, high, size);
		quicksort(array, low, d - 1, size);
		quicksort(array, d + 1, high, size);
	}
}
/**
 *quick_sort - sort an array of integers.
 *@array: Array to sort.
 *@size: Size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array != NULL && size >= 2)
	{
		quicksort(array, 0, size - 1, size);
	}
}
