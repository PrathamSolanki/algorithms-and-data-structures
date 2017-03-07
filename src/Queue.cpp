#include "Queue.h"

Queue::Queue ()
{
	front = NULL; 
	rear = NULL;
}	

Node* Queue::CreateNode (int value)
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

bool Queue::isEmpty ()
{
	if (front == NULL)
		return true;
			
	else
		return false;
}

void Queue::display ()
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

void Queue::EnQueue (int value)
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

void Queue::DeQueue ()
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

int Queue::peek ()
{
	if (isEmpty()) {
		cout << "The Queue is empty." << endl;
		return -1;
	}

	else
		return front->data;
}
