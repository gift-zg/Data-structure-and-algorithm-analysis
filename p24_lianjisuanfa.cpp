#include<iostream>
using namespace std;
int maxsubsum(const int A[], int N)
{
	int i, tempsum, maxsum;
	tempsum = maxsum = 0;
	for (i = 0; i < N; i++)
	{
		tempsum += A[i];
		if (tempsum > maxsum)
			maxsum = tempsum;
		else if (tempsum < 0)
			tempsum = 0;
	};
	return maxsum;
};
int main()
{
	int array[8] = { 4,-3,5,-2,-1,2,6,-2 };
	cout << maxsubsum(array, 7) << endl;

}