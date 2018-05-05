/*
题目描述
    求1-n内的完数，所谓的完数是这样的数，它的所有因子相加等于它自身，比如6有3个因子1,2,3,1+2+3=6，那么6是完数。即完数是等于其所有因子相加和的数。

输入
    测试数据有多组，输入n，n数据范围不大。

输出
    对于每组输入,请输出1-n内所有的完数。如有案例输出有多个数字，用空格隔开，输出最后不要有多余的空格。
*/
#include<cstdio>
bool isprefect(int n)
{
	int sum = 0;
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
			sum+=i;
	}
	if(sum == n)
		return true;
	else
		return false;
}
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		bool isfirst = true;
		for(int i = 1;i<=n;i++)
		{
			if(isprefect(i))
			{
				if(isfirst)
				{
					printf("%d",i);
					isfirst = false;
				}
				else
					printf(" %d",i);
			}

		}
		printf("\n");
	}
	return 0;
}
