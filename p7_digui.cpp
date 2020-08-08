#include<iostream>
using namespace std;
int cal(int x)
{
	int result;
	if (x == 0)
		return 0;
	else
		result = 2 * cal(x - 1) + x * x;
	return result;
};
int main()
{
	int Num;
	cout << "please input a number between 0 and 10 :" << endl;
	cin >> Num;
	
	cout << "The result is :"<<'\n'<<cal(Num) << endl;
}
