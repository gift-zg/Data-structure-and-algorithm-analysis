#include<iostream>
using namespace std;
double judge(unsigned int N) /*����������������صĸ��ʣ������趨�����С�ڵ���101*/
{
	int rel = 0;
	int tot = 0;
	int i, j;
	for (i = 1; i <= 101; i++)
	{
		for (j = i + 1; j <= N; j++)
		{
			tot++;
			if (gcd(i, j) == 1) /*gcd����Ϊ֮ǰ��д������������ĺ���*/
				rel++;
		}

	}
	return rel / tot;
}