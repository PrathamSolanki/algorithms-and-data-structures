#ifndef _SinglyLinkedList_H
#define _SinglyLinkedList_H

class SinglyLinkedList
{
	private:
		struct Node
		{
			int data;
			Node *next;
		};

		Node *start;

	public:
		SinglyLinkedList ();

		Node* CreateNode (int value);		

		int size ();

		void display ();

		void InsertAtFirst (int value);
	
		void InsertAtLast (int value);

		void InsertAtPos (int pos, int value);

		void DeleteAtFirst ();

		void DeleteAtLast ();

		void DeleteAtPos (int pos);

		int search (int value);
};

#endif
