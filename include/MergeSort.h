#ifndef _MergeSort_H
#define _MergeSort_H

class MergeSort
{
	private:
		int *AuxiliaryArray;
	
		void MergeArrays (int *Array, int low, int mid, int high);

		void PartitionArray (int *Array, int low, int high);

	public:
		MergeSort (int *Array, int N);
};

#endif
