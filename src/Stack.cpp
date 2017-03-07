#include "Stack.h"

Stack::Stack ()
{
	top = NULL;
}

Node* Stack::CreateNode (int value)
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

bool Stack::isEmpty ()
{
	if (top == NULL)
		return true;

	else
		return false;
}

void Stack::display ()
{
	if (isEmpty()) {
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

void Stack::push (int value)
{
	Node *NewTop;
	NewTop = CreateNode(value);	
			
	if (isEmpty()) {
		top = NewTop;
		top->next = NULL;
	}

	else {
		NewTop->next = top;
		top = NewTop;
	}
}
	
void Stack::pop ()
{
	if (isEmpty()) {
		cout << "The Stack is empty." << endl;
		return;
	}

	else {
		Node *temp;

		temp = top;
		top = top->next;
		delete(temp);
	}
}

int Stack::peek ()
{
	if (isEmpty()) {
		cout << "The Stack is empty." << endl;
		return -1;
	}

	else 
		return top->data;
}
