// CPP program to find smallest integer X
// such that sum of its XOR with range is
// maximum.
#include <bits/stdc++.h>
using namespace std;

#define MAX 2147483647
int one[100001][32];

// Function to make prefix array which
// counts 1's of each bit up to that number
void make_prefix(int A[], int n)
{
	for (int j = 0; j < 32; j++)
		one[0][j] = 0;

	// Making a prefix array which sums
	// number of 1's up to that position
	for (int i = 1; i <= n; i++)
	{
		int a = A[i - 1];
		for (int j = 0; j < 32; j++)
		{
			int x = pow(2, j);

			// If j-th bit of a number is set then
			// add one to previously counted 1's
			if (a & x)
				one[i][j] = 1 + one[i - 1][j];
			else
				one[i][j] = one[i - 1][j];
		}
	}
}

// Function to find X
int Solve(int L, int R)
{
	int l = L, r = R;
	int tot_bits = r - l + 1;

	// Initially taking maximum value all bits 1
	int X = MAX;

	// Iterating over each bit
	for (int i = 0; i < 31; i++)
	{

		// get 1's at ith bit between the
		// range L-R by subtracting 1's till
		// Rth number - 1's till L-1th number
		int x = one[r][i] - one[l - 1][i];

		// If 1's are more than or equal to 0's
		// then unset the ith bit from answer
		if (x >= tot_bits - x)
		{
			int ith_bit = pow(2, i);

			// Set ith bit to 0 by doing
			// Xor with 1
			X = X ^ ith_bit;
		}
	}
	return X;
}

// Driver program
int main()
{
	// Taking inputs
	int n = 5, q = 3;
	int A[] = { 210, 11, 48, 22, 133 };
	int L[] = { 1, 4, 2 }, R[] = { 3, 14, 4 };

	make_prefix(A, n);

	for (int j = 0; j < q; j++)
		cout << Solve(L[j], R[j]) << endl;

	return 0;
}
