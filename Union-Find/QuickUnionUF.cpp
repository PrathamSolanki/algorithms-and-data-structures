#include <iostream>

using namespace std;

class QuickUnionUF
{
	private:
		int *id = NULL;

		int root(int i)
		{
			while(i != id[i])
				i = id[i];
			return i;
		}

	public:
		QuickUnionUF(int N)
		{	
			id = new int[N];
			for(int i = 0; i < N; i++)
				id[i] = i;
		}

		bool isConnected(int p, int q)
		{
			if (p == q) {
				return true;
			} else {
				return root(p)==root(q);
			}
		}

		void doUnion(int p, int q)
		{
			if (p == q) {
				return;
			} else {
				int rootp = root(p);
				int rootq = root(q);
				id[rootp] = rootq;	
			}
		}	
};
