#include <iostream>
#include "MergeSort.h"

using namespace std;

int main()
{
	int A[] = {10,9,8,7,6,5,4,3,2,1};
	int N = 10;

	MergeSort(A,N); 

	for (int i = 0; i < N; i++)
		cout << A[i] << endl;

	return 1;
}
