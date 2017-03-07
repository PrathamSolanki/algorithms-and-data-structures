#ifndef _Queue_H
#define _Queue_H

class Queue
{
	private:
		struct Node
		{
			int data;
			Node *next;
		};

		Node *front, *rear;

	public:
		Queue ();	

		Node* CreateNode (int value);

		bool isEmpty ();

		void display ();

		void EnQueue (int value);

		void DeQueue ();

		int peek ();
};

#endif
