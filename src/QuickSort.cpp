#include "QuickSort.h"

int QuickSort::partition (int *Array, int low, int high)
{
	int i = low;
	int j = high + 1;
	int pivot = Array[low];

	while (true){
		while (Array[++i] < pivot) {
			if (i == high)
				break;
		}

		while (Array[--i] > pivot) {
			if (j == low)
				break;
		}

		if (i >= j)
			break;

		int temp = Array[i];
		Array[i] = Array[j];
		Array[j] = temp;
	}

	int temp = Array[low];
	Array[low] = Array[j];
	Array[j] = temp;

	return j;
}

void QuickSort::sort (int *Array, int low, int high)
{
	if (low < high) {
		int j = partition(Array, low, high);

		sort(Array,low,j-1);
		sort(Array,j+1,high);
	}

	else
		return;
}

QuickSort::QuickSort (int *Array, int N)
{
	sort(Array, 0, N-1);
}
