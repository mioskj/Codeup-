/*
题目描述
输入20个数，每个数都在1-10之间，求1-10中的众数（众数就是出现次数最多的数，如果存在一样多次数的众数，则输出权值较小的那一个）。

输入
测试数据有多组，每组输入20个1-10之间的数。

输出
对于每组输入,请输出1-10中的众数。


注意如果存在一样多次数的众数，则输出权值较小的那一个。
*/
#include<cstdio>
const int maxn = 11;
int main()
{
  int num[maxn]={0};
  int n,max;
  int j;
  while(scanf("%d",&n)!=EOF)
  {
    num[n]++;
    for(int i = 0;i<19;i++)
    {
      scanf("%d",&n);
      num[n]++;
    }
    max = num[1];
    j = 1;
    for(int i =2;i<=10;i++)
    {
      if(num[i]>max)
      { 
        max = num[i]; 
        j = i;  
      }
    }   
    printf("%d\n",j);
    for(int i =1;i<=10;i++)
    {
      num[i] = 0;
    }
  }
  return 0;
}
