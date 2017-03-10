#include "MergeSort.h"

void MergeSort::MergeArrays (int *Array, int low, int mid, int high)
{
	int i, j, k;

	i = low;
	j = mid + 1;

	for (k = low; k <= high; k++)
	{
		if (i > mid)
			AuxiliaryArray[k] = Array[j++];

		else if (j > high)
			AuxiliaryArray[k] = Array[i++];	

		else if (Array[i] < Array[j])
			AuxiliaryArray[k] = Array[i++];

		else
			AuxiliaryArray[k] = Array[j++];
	}	

	for (k = low; k <= high; k++)
		Array[k] = AuxiliaryArray[k];
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

MergeSort::MergeSort (int *Array, int N)
{
	AuxiliaryArray = new int[N];
	
	PartitionArray(Array, 0, N-1);
}
