#include <iostream>

using namespace std;

class BinarySearch
{
	private:
		int high, low;

	public:
		int mid;

		BinarySearch ()
		{
			mid = high = low = 0;
		}

		int search (int *SortedArray, int N, int x)
		{
			high = N - 1;
			
			while (low <= high) {
				mid = low + (high - low) / 2;

				if (x < SortedArray[mid])
					high = mid - 1;

				else if (x > SortedArray[mid])
					low = mid + 1;

				else
					return mid;
			}

			return -1;
		}	
};
