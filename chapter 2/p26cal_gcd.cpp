#include<iostream>
using namespace std;
unsigned int gcd(unsigned int m, unsigned int n)
{
	unsigned int rem;
	while (n > 0)
	{
		rem = m % n;
		m = n;
		n = rem;
	}
	return m;
}
int main()
{
	unsigned int num1, num2;
	cout << "Please input two numbers bigger than zero:" << endl;
	cin >> num1 >> num2;
	if (num1 >= num2)
		cout << gcd(num1, num2) << endl;
	else
		cout << gcd(num2, num1) << endl;
}