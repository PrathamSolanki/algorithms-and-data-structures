#ifndef _QuickUnionUF_H
#define _QuickUnionUF_H

class QuickUnionUF
{
	private:
		int *id = NULL;

		int root (int i);

	public:
		QuickUnionUF (int N);

		bool isConnected (int p, int q);

		void doUnion (int p, int q);
};

#endif
