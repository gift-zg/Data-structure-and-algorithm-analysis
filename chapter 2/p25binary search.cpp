#include<iostream>
using namespace std;
int binarysearch(const int A[], int x, int N)
{
	int small, mid, large;
	small = 0;
	large = N - 1;
	while (small <= large)
	{
		mid = (small + large) / 2;
		if (x > A[mid])
			small = mid + 1;
		else if (x < A[mid])
			large = mid - 1;
		else
			return mid; /*表明已找到*/
	}
	return -1; /*表明未找到*/
}
int main()
{
	int num;
	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
	size_t maxindex;
	maxindex = sizeof(array) / sizeof(array[0]);
	cout<< "Please choose a number between 1 and 10,including 1 and 10 :"<<endl;
	cin >> num;
	cout << binarysearch(array, num, maxindex) << endl;
}