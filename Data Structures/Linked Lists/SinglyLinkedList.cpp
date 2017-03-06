#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node *next;
};

class SinglyLinkedList
{
	private:
		Node *start;

	public:
		SinglyLinkedList ()
		{
			start = NULL;
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

		int size ()
		{
			if (start == NULL) {
				cout << "The Linked List is empty." << endl;
				return 0;
			}

			int count = 0;		
			Node *TraversalNode;
			TraversalNode = start;

			while (TraversalNode != NULL) {
				count++;
				TraversalNode = TraversalNode->next;
			}
			return count;
		}

		void display ()
		{
			if (start == NULL) {
				cout << "The Linked List is empty." << endl;
				return;
			}
		
			Node *TraversalNode;
			TraversalNode = start;

			while (TraversalNode != NULL) {
				cout << TraversalNode->data << "->";
				TraversalNode = TraversalNode->next;
			}
			cout << "NULL" << endl;
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

		void InsertAtPos (int pos, int value)
		{
			if (pos > 1  && pos <= size()) {
				Node *NewNode, *TraversalNode, *ptr;

				NewNode = CreateNode(value);
				TraversalNode = start;

				for (int i = 1; i < pos; i++) {
					ptr = TraversalNode;
					TraversalNode = TraversalNode->next;
				}

				ptr->next = NewNode;
				NewNode->next = TraversalNode;
			}

			else if (pos == 1)
				InsertAtFirst(value);

			else
				cout << "Insert Position out of range." << endl;
		}

		void DeleteAtFirst ()
		{
			if (start == NULL)
				cout << "The Linked List is empty." << endl;

			else 
				start = start->next;
		}

		void DeleteAtLast ()
		{
			Node *TraversalNode = start;

			while ((TraversalNode->next)->next != NULL)
				TraversalNode = TraversalNode->next;

			TraversalNode->next = NULL;			
		}

		void DeleteAtPos (int pos)
		{
			if (pos > 1  && pos <= size()) {
				Node *TraversalNode, *ptr;

				TraversalNode = start;

				for (int i = 1; i < pos; i++) {
					ptr = TraversalNode;
					TraversalNode = TraversalNode->next;
				}

				ptr->next = TraversalNode->next;
			}

			else if (pos == 1)
				DeleteAtFirst ();

			else
				cout << "Insert Position out of range." << endl;			
		}

		int search (int value)
		{
			if (start == NULL) {
				cout << "The Linked List is empty." << endl;	
				return 0;
			}

			else {
				Node *TraversalNode = start;
				int count = 0;
	
				while (TraversalNode->data != value) {
					TraversalNode = TraversalNode->next;
					count++;
				}		

				return count;
			}
			return 0;
		}
};
