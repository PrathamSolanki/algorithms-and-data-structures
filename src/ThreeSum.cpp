#include "ThreeSum.h" 
#include "BinarySearch.h"

ThreeSum::ThreeSum ()
{
	count = 0;
}

int ThreeSum::count_3sum (int *SortedArray, int N)
{
	if (N < 3)
		return 0;

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			BinarySearch obj;
			if (obj.search (SortedArray, j + 1, N - 1, -(SortedArray[i] + SortedArray[j]) ))
				count++;
		}
	}
	return count;
}
