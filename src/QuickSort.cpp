#include "QuickSort.h"

void QuickSort::swap (int *Array, int a, int b)
{
	int temp = Array[a];
	Array[a] = Array[b];
	Array[b] = temp;
}

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

		while (Array[--j] > pivot) {
			if (j == low)
				break;
		}

		if (i >= j)
			break;

		swap(Array,i,j);	
	}

	swap(Array,low,j);

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
