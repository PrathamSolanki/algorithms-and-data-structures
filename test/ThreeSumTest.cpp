#include <iostream>
#include "ThreeSum.h"

using namespace std;

int main()
{
	int A[] = {-2,-1,0,1,2,3};

	ThreeSum obj;

	cout << obj.count_3sum(A,6) << endl;
	return 1;
}
