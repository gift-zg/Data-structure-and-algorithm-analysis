#include<iostream>
using namespace std;
static  int Maxsubsum(const int A[], int left, int right)
{
	int Maxleftsum , Maxrightsum;
	int Maxleftbordersum, Maxrightbordersum;
	int leftbordersum, rightbordersum;
	int center, i,j;
	int Maxsum = 0;
	
	if ( left==right )     /*基准情况，即数组A只有一个元素的时候*/
	{
		if (A[left] > 0)
			return A[left];
		else
			return 0;
	}
	center = (left + right) / 2;

	Maxleftsum = Maxsubsum(A, left, center);
	Maxrightsum = Maxsubsum(A, center + 1, right);

	Maxleftbordersum = 0; leftbordersum = 0;
	for (i = center; i >= left; i--)
	{
		leftbordersum += A[i];
		if (leftbordersum > Maxleftbordersum)
			Maxleftbordersum = leftbordersum;
	}
	Maxrightbordersum = 0; rightbordersum = 0;
	for (j = center + 1; j <= right; j++)
	{
		rightbordersum += A[j];
		if (rightbordersum > Maxrightbordersum)
			Maxrightbordersum = rightbordersum;
	}
	if (Maxleftsum > Maxrightsum)
		Maxsum = Maxleftsum;
	else
		Maxsum = Maxrightsum;

	if (Maxsum > Maxleftbordersum + Maxrightbordersum)
		return Maxsum;
	else
	{
		Maxsum = Maxleftbordersum + Maxrightbordersum;
		return Maxsum;
	}
}
int main()
{
	int array[8] = { 4,-3,5,-2,-1,2,6,-2 };
	cout << Maxsubsum(array, 0, 7) << endl;
}