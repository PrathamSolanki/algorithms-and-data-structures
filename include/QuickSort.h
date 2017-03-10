#ifndef _QuickSort_H
#define _quickSort_h

class QuickSort
{
	private:
		void sort (int *Array, int low, int high);

		int partition (int *Array, int low, int high);

		void swap (int *Array, int a, int b);

	public:
		 QuickSort (int *Array, int N);
};

#endif
