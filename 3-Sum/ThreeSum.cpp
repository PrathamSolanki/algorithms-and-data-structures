#include <iostream>

using namespace std;

class ThreeSum
{
	private:
		int high, mid, low;

		bool BinarySearch (int *SortedArray, int low, int high, int x)
		{
			while (low <= high) {
				mid = low + (high - low) / 2;

				if (x < SortedArray[mid])
					high = mid - 1;

				else if (x > SortedArray[mid])
					low = mid + 1;

				else
					return true;
			}

			return false;
		}

	public:
		int count;

		ThreeSum ()
		{
			count = 0;
		}				

		int count_3sum (int *SortedArray, int N)
		{
			if (N < 3)
				return 0;

			for (int i = 0; i < N; i++) {
				for (int j = i + 1; j < N; j++) {
					if (BinarySearch (SortedArray, j + 1, N - 1, -(SortedArray[i] + SortedArray[j]) ))
						count++;
				}
			}
			return count;
		}
};
