#include <iostream>

using namespace std;

class WeightedQuickUnionUF 
{
	private:
		int *id = NULL;
		int *size = NULL;

		int root(int i)
		{
			while (i != id[i]) {
				i = id[i];
				id[i] = id[id[i]];
			}
			return i;
		}

	public:
		WeightedQuickUnionUF(int N)
		{	
			id = new int[N];
			size = new int[N];
			for (int i = 0; i < N; i++) {
				id[i] = i;
				size[i] = 1;
			}
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
			int rootp = root(p);
			int rootq = root(q);

			if (size[rootp] < size[rootq]) {
				id[rootp] = rootq;
				size[rootq] += size[rootp];
			} else {
				id[rootq] = rootp;
				size[rootp] += size[rootq];				
			}	
		}	
};
