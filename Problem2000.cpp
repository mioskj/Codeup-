/*
题目描述
编写程序，读入一个整数N。若N为非负数，则计算N 到2N 之间的整数和；若N为一个负数，则求2N 到N 之间的整数和。
输入
第一行表示样例数m，接下来m行每行一个整数N，N的绝对值不超过100。


输出
输出m行，每行表示对应的题目所求。
*/
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int m,N,N2,sum;
  while(~scanf("%d",&m))
  {
    while(m--)
    {
      scanf("%d",&N);
      N2 = 2*N;
      sum = (N2+N)*(abs(N)+1)/2;
      printf("%d\n",sum);
    }
  }
}
