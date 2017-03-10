#ifndef _MergeSort_H
#define _MergeSort_H

class MergeSort
{
	private:
		int mid;

		int *OriginalArray, *AuxillaryArray;
	
		void MergeArrays (int low, int mid, int high);

		void PartitionArray (int low, int high);

	public:
		MergeSort ();

		void sort (int *Array, int N);
};

#endif
