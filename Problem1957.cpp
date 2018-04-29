/*
题目描述
用小于等于n元去买100只鸡，大鸡5元/只，小鸡3元/只,还有1/3元每只的一种小鸡，分别记为x只,y只,z只。编程求解x,y,z所有可能解。

输入
测试数据有多组，输入n。

输出
对于每组输入,请输出x,y,z所有可行解，按照x，y，z依次增大的顺序输出。
*/
#include<cstdio>
int main()
{
  int n,x,y,z;
  double price;
  while(scanf("%d",&n)!=EOF)
  {
    for(int i = 0;i<=100;i++)
    {
      for(int j = 0;j<=100-i;j++)
      {
        price = 1.0/3.0*(double)(100-i-j) + 3*j + i*5;
        if(price<=n)
          printf("x=%d,y=%d,z=%d\n",i,j,(100-i-j));
      }
    }
  }
  return 0;
}
