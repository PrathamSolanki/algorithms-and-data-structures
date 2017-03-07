#include "BinarySearch.h"

BinarySearch::BinarySearch ()
{
	mid = 0;
}

int BinarySearch::search (int *SortedArray, int low, int high, int x)
{
	while (low <= high) {
		mid = low + (high - low) / 2;

		if (x < SortedArray[mid])
			high = mid - 1;

		else if (x > SortedArray[mid])
			low = mid + 1;

		else
			return mid;
	}

	return -1;
}	
