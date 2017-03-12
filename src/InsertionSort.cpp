#include "InsertionSort.h"

InsertionSort::InsertionSort (int *Array, int N)
{
	value = 0;
	hole = 0;
	for (int i = 1; i < N; i++) {
		value = Array[i];
		hole = i;

		while (hole > 0 && Array[hole-1] > value) {
			Array[hole] = Array[hole-1];
			hole -= 1; 
		}

		Array[hole] = value; 
	}
}
