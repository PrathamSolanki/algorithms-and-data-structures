#include "iostream"
#include "BinarySearch.h"

using namespace std;

int main()
{
	int A[] = {1,2,3,4,5};

	BinarySearch obj;

	cout << "Found 4 at array index " << obj.search(A,0,4,4) << endl;
	return 1;
}
