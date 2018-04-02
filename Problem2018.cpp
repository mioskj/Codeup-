/*
题目描述
编写一个求斐波那契数列的递归函数，输入n 值，使用该递归函数，输出如下图形（参见样例）。

输入
输入第一行为样例数m，接下来有m行每行一个整数n，n不超过10。


输出
对应每个样例输出要求的图形(参见样例格式)。
*/
#include<cstdio>

int fib(int n)
{
  if(n==1) return 0;
  else if(n==2) return 1;
  else
    return fib(n-1)+fib(n-2);
}
int main()
{
  int m,n;
  scanf("%d",&m);
  for(int i = 0;i<m;i++)
  {
    scanf("%d",&n);
    for(int j = 1;j<n+1;j++)
    {
      for(int k = j;k<n;k++)
      {
        printf("  ");
      }
      for(int s = 1;s<2*j;s++)
      {
        printf("%d ",fib(s));
      }
      printf("\n");
    }
  }
  return 0;
}
      
  
