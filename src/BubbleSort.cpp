#include "BubbleSort.h"

void BubbleSort::swap (int *Array, int a, int b)
{
	int temp = Array[a];
	Array[a] = Array[b];
	Array[b] = temp;
}

BubbleSort::BubbleSort (int *Array, int N)
{
	for (int k = 1; k < N; k++) {
		for (int i = 0; i < N-1; i++) {
			if (Array[i] > Array[i+1])
				swap(Array,i,i+1);
		}
	}	
}
