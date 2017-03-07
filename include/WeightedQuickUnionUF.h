#ifndef _WeightedQuickUnionUF
#define _WeightedQuickUnionUF_H

class WeightedQuickUnionUF 
{
	private:
		int *id = NULL;
		int *size = NULL;

		int root (int i);

	public:
		WeightedQuickUnionUF (int N);

		bool isConnected (int p, int q);

		void doUnion (int p, int q);
};

#endif
