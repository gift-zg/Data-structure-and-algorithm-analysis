#include<iostream>
using namespace std;
double judge(unsigned int N) /*估计两个随机数互素的概率，这里设定随机数小于等于101*/
{
	int rel = 0;
	int tot = 0;
	int i, j;
	for (i = 1; i <= 101; i++)
	{
		for (j = i + 1; j <= N; j++)
		{
			tot++;
			if (gcd(i, j) == 1) /*gcd函数为之前编写的求最大公因数的函数*/
				rel++;
		}

	}
	return rel / tot;
}