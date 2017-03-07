#ifndef _BinarySearch_H
#define _BinarySearch_H

class BinarySearch
{
	private:
		int high, low;

	public:
		int mid;

		BinarySearch ();

		int search (int *SortedArray, int N, int x);
};

#endif
