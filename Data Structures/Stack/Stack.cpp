#include <iostream>

using namespace std;

struct Node 
{
	int data;
	Node *next;
};

class Stack
{
	private:
		Node *top;

	public:
		Stack ()
		{
			top = NULL;
		}

		Node* CreateNode (int value)
		{
			Node *node;
			node = new(Node);

			if (node == NULL) {
				cout << "Memory not allocated." << endl;
				return 0;
			}

			else {
				node->data = value;
				node->next = NULL;

				return node;
			}
		}

		void display ()
		{
			if (top == NULL) {
				cout << "The Stack is empty." << endl;
				return;
			}

			else {
				Node *TraversalNode;
				TraversalNode = top;

				while (TraversalNode != NULL) {
					cout << TraversalNode->data << "\n";
					TraversalNode = TraversalNode->next;
				}	
			}
		}

		void push (int value)
		{
			Node *NewTop;
			NewTop = CreateNode(value);	
			
			if (top == NULL) {
				top = NewTop;
				top->next = NULL;
			}

			else {
				NewTop->next = top;
				top = NewTop;
			}
		}
	
		void pop ()
		{
			if (top == NULL) {
				cout << "The Stack is empty." << endl;
				return;
			}

			else {
				Node *NewTop;

				NewTop = top;
				top = top->next;
				delete(NewTop);
			}
		}
};

int main ()
{
	Stack obj;
	obj.push(1);
	obj.push(2);
	obj.push(3);
	obj.display();
	obj.pop();
	obj.display();
	return 0;
}
