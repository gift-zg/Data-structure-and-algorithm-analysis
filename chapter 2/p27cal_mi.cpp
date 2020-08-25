#include<iostream>
using namespace std;
long int pow(long int x, unsigned int N)
{
	if (N == 0)
		return 1;
	if (N == 1)
		return x;
	if (N % 2 == 0 && N != 0)
		return pow(x * x, N / 2);
	else
		return pow(x * x, N / 2) * x;
}
int main()
{
	long int num;
	unsigned int p;
	cout << "Please input two numbers between 0 and 5:" << endl;
	cin >> num >> p;
	cout << pow(num, p) << endl;
}