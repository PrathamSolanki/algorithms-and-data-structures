#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node *next;
};

class Queue
{
	private:
		Node *front, *rear;

	public:
		Queue ()
		{
			front = NULL; 
			rear = NULL;
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

		bool isEmpty ()
		{
			if (front == NULL)
				return true;
			
			else
				return false;
		}

		void display ()
		{
			if (isEmpty()) {
				cout << "The Queue is empty." << endl;
				return;
			}

			else {
				Node *TraversalNode;
				TraversalNode = front;

				while (TraversalNode != NULL) {
					cout << TraversalNode->data << "\n";
					TraversalNode = TraversalNode->next;
				}	
			}			
		}

		void EnQueue (int value)
		{
			Node *NewNode;
			NewNode = CreateNode(value);

			if (front == NULL && rear == NULL) {
				front = rear = NewNode;
				return;
			}

			else {
				rear->next = NewNode;
				rear = NewNode;
			}
		}

		void DeQueue ()
		{
			if (isEmpty()) {
				cout << "The Queue is empty." << endl;
				return;
			}

			else if (front == rear)
				front = rear = NULL;

			else {
				Node *temp = front;

				front = front->next;
				delete(temp);
			}
		}

		int peek ()
		{
			if (isEmpty()) {
				cout << "The Queue is empty." << endl;
				return -1;
			}

			else
				return front->data;
		}
};
