#ifndef _ThreeSum_H
#define _ThreeSum_H

class ThreeSum
{
	private:
		int high, mid, low;

		bool BinarySearch (int *SortedArray, int low, int high, int x);

	public:
		int count;

		ThreeSum ();
				
		int count_3sum (int *SortedArray, int N);
};

#endif
