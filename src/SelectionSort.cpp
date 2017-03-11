#include "SelectionSort.h"

void SelectionSort::swap (int *Array, int a, int b)
{
	int temp = Array[a];
	Array[a] = Array[b];
	Array[b] = temp;
}

SelectionSort::SelectionSort (int *Array, int N)
{
	int iMin;

	for (int i = 0; i < N-1; i++)  {
		iMin = i;

		for (int j = i+1; j < N; j++) {
			if (Array[j] < Array[iMin])
				iMin = j;
		}

		swap(Array, i, iMin);
	}	
}
