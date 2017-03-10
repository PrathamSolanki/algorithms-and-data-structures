#include "MergeSort.h"

MergeSort::MergeSort ()
{
	mid = 0;
}

void MergeSort::MergeArrays (int low, int mid, int high)
{
	int i, j, k;

	i = low;
	j = mid + 1;

	for (k = low; k <= high; k++) {
		if (i > mid)
			OriginalArray[k] = AuxillaryArray[j++];

		else if (j > high)
			OriginalArray[k] = AuxillaryArray[i++];

		else if (AuxillaryArray[j] < AuxillaryArray[i])
			OriginalArray[k] = AuxillaryArray[j++];

		else
			OriginalArray[k] = AuxillaryArray[i++];
	}	
}

void MergeSort::PartitionArray (int low, int high)
{
	if (low < high) {
		mid = (low + high)/2;

		PartitionArray (low, mid);
		PartitionArray (mid+1, high);
		MergeArrays (low, mid, high);
	}

	else
		return;
}

void MergeSort::sort (int *Array, int N)
{
	AuxillaryArray = new int[N];
	OriginalArray = Array;
	
	for (int k = 0; k < N; k++)
		AuxillaryArray[k] = Array[k];

	PartitionArray(0, N-1);
}
