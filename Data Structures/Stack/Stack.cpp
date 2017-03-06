#include <iostream>

using namespace std;

class Stack
{

};

int main ()
{
	Stack obj;
	obj.push(4);
	obj.push(4);
	obj.push(4);
	obj.display();
	obj.pop();
	obj.display();
	return 0;
}
