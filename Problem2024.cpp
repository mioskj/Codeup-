/*
题目描述
实现一个多项式的类（a+b*x+c*x^2+d*x^3+...+），要求输入该多项式的系数和x

的值后打印出这个多项式的值。

输入
输入第一行为样例数m，对于每个样例，第一行为多项式最高项次数n，接下来n+1个整数表示每项系数，最后一个整数x，n不超过10。

输出
输出m行，表示个多项式代入x后的值。

*/
#include<cstdio>
#include<cmath>
using namespace std;
const int maxn = 15;
int main()
{
  int m,n,sum,x; 
  while(~scanf("%d",&m))
  {
    while(m--)
    {
      int p[maxn]={0};
      sum = 0;
      scanf("%d",&n);
      for(int i = 0;i<=n;i++)
      {
        scanf("%d",&p[i]);
      }
      scanf("%d",&x);
      for(int i = 0;i<=n;i++)
      {
        sum += p[i]*pow(x,i);
      }
      printf("%d\n",sum);
    }
  }
}
