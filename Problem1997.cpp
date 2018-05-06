/*
题目描述
一个数如果恰好等于它的各因子（该数本身除外）子和，如：6=3+2+1，则称其为“完数”；
若因子之和大于该数，则称其为“盈数”。求出2 到60 之间所有“完数”和“盈数”，并以如
下形式输出： E: e1 e2 e3 ......(ei 为完数) G: g1 g2 g3 ......(gi 为盈数)

输入
无

输出
按描述要求输出（注意EG后面的冒号之后有一个空格）。
*/
#include<cstdio>
int isprefect(int n)
{
  int sum = 0;
  for(int i=1;i<=n/2;i++)
  {
    if(n%i==0)
      sum+=i;
  }
  if(sum == n)
    return 1;
  else if(sum > n)
    return 0;
}
int main()
{
  int E[60],G[60];
  int e = 0,g = 0;
  for(int i = 2;i<=60;i++)
  {
    if(isprefect(i)==1)
      E[e++] = i;
    else if(isprefect(i)==0)
      G[g++] = i;
  }
  printf("E:");
  for(int i = 0;i<e;i++)
  {
    printf(" %d",E[i]);
  }
  printf("\nG:");
  for(int i = 0;i<g;i++)
  {
    printf(" %d",G[i]);
  }
}
