#include "MergeSort.h"

void MergeSort::MergeArrays (int *Array, int low, int mid, int high)
{
	int i, j, k;

	i = low;
	j = mid + 1;

	for (k = low; k <= high; k++)
	{
		if (i > mid)
			AuxillaryArray[k] = Array[j++];

		else if (j > high)
			AuxillaryArray[k] = Array[i++];	

		else if (Array[i] < Array[j])
			AuxillaryArray[k] = Array[i++];

		else
			AuxillaryArray[k] = Array[j++];
	}	

	for (k = low; k <= high; k++)
		Array[k] = AuxillaryArray[k];
}

void MergeSort::PartitionArray (int *Array, int low, int high)
{
	if (low < high) {
		int mid = low + (high - low)/2;

		PartitionArray (Array,low, mid);
		PartitionArray (Array,mid+1, high);
		MergeArrays (Array,low, mid, high);
	}

	else
		return;
}

void MergeSort::sort (int *Array, int N)
{
	AuxillaryArray = new int[N];
	
	PartitionArray(Array, 0, N-1);
}
