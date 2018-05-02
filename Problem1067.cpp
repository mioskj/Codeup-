/*
题目描述
我们定义如下矩阵：
1/1 1/2 1/3
1/2 1/1 1/2
1/3 1/2 1/1
矩阵对角线上的元素始终是1/1，对角线两边分数的分母逐个递增。
请求出这个矩阵的总和。

输入
输入包含多组测试数据。每行给定整数N（N<50000），表示矩阵为N*N。当N=0时，输入结束。

输出
输出答案，结果保留2位小数。
*/
#include<cstdio>
int main()
{
  int n;
  while(scanf("%d",&n),n)
  {
    double sum = 0;
    double nn = n - 1;
    for(int i = 2;i<=n;i++)
    {
      sum+=1.0/i*nn;
      nn--;
    }
    sum = sum*2 + n;
    printf("%.2f\n",sum);
  }
  return 0;
}
