#include <iostream>

using namespace std;

class Solution
{
public:
	int maxSubArray(int A[], int n)
	{
		int sum[n], res;

		sum[0] = A[0];
		res = sum[0];
		for (int i = 1; i < n; i++)
		{
			sum[i] = max(A[i], sum[i-1] + A[i]);
			res = max(res, sum[i]);
		}

		return res;
	}
};

int main()
{
	Solution s;
	int A[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	cout << s.maxSubArray(A, 9) << endl;

	return 0;
}
