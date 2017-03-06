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
		Node *start, *top;
		int MaxStackSize;

	public:
		Stack (int max_size)
		{
			start = top = NULL;
			MaxStackSize = max_size;
		}

		void display ()
		{
			if (top == NULL) {
				cout << "The Stack is empty.";
			}

			Node *TraversalNode;
			TraversalNode = start;

			while (TraversalNode != NULL) {
				cout << TraversalNode->data << "->";
				TraversalNode = TraversalNode->next;
			}
			cout << "NULL" << endl;
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

		void push (int value)
		{
			Node *NewTop, *OldTop;

			NewTop = CreateNode(value);

			if (start == NULL) {
				Top = start = NewTop;
				start->next = NULL;
				Top->next = NULL;
			}

			else {
				OldTop = start;

				while (OldTop->next != NULL) {
					OldTop = OldTop->next;
				} 

				OldTop->next = NewTop;
				Top = NewTop;
			}
		}

		int pop ()
		{

		}

		int peek ()
		{

		}

		int size ()
		{

		}

		

};
