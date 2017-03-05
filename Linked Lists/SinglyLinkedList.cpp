#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node *next;
};

class SinglyLinkedList
{
	public:
		Node *start;		

		SinglyLinkedList ()
		{
			start = NULL;
		}

		void display ()
		{
			if (start == NULL) {
				cout << "The Linked List is empty." << endl;
				return;
			}
		
			Node *temp;
			temp = start;

			while (temp != NULL) {
				cout << temp->data << "->";
				temp = temp->next;
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

		void InsertAtFirst (int value)
		{
			Node *NewFirst, *OldFirst;
	
			NewFirst = CreateNode(value);

			if (start == NULL) {
				start = NewFirst;
				start->next = NULL;
			}

			else {
				OldFirst = start;
				start = NewFirst;
				start->next = OldFirst;
			}
		}	

		void InsertAtLast (int value)
		{
			Node *NewLast, *OldLast;

			NewLast = CreateNode(value);
			OldLast = start;

			while (OldLast->next != NULL) {
				OldLast = OldLast->next;
			}

			OldLast->next = NewLast;
			NewLast->next = NULL;
		}
};

int main()
{
	SinglyLinkedList obj;

	obj.display();
	obj.InsertAtFirst(4);
	obj.InsertAtLast(4);
	obj.display();
	return 0;
}
