#include <iostream>
#include "SelectionSort.h"

using namespace std;

int main()
{
	int A[] = {1,2,3,4,5,6,7,8,9,10};
	int N = 10;

	SelectionSort(A,N);

	for (int i = 0; i < N; i++)
		cout << A[i] << endl;

	return 1;
}
