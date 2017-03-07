#ifndef "_Stack_H"
#define "_Stack_H"

class Stack
{
	private:
		struct Node 
		{
			int data;
			Node *next;
		};

		Node *top;

	public:
		Stack ();

		Node* CreateNode (int value);

		bool isEmpty ();

		void display ();

		void push (int value);

		void pop ();

		int peek ();

};

#endif
