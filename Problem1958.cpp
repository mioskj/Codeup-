/*
题目描述
设a、b、c均是0到9之间的数字，abc、bcc是两个三位数，且有：abc+bcc=532。求满足条件的所有a、b、c的值。

输入
题目没有任何输入。

输出
请输出所有满足题目条件的a、b、c的值。
a、b、c之间用空格隔开。
每个输出占一行。
*/
#include<cstdio>
bool tonum(int a,int b,int c)
{
  int num1 = a*100+b*10+c;
  int num2 = b*100+c*10+c;
  if(num1+num2==532)
    return true;
  else
    return false;
}
int main()
{
  for(int i = 0;i<10;i++)
  {
    for(int j = 0;j<10;j++)
    {
      for(int k = 0;k<10;k++)
      {
        if(tonum(i,j,k))
          printf("%d %d %d\n",i,j,k);
      }
    }
  }
  return 0;
}
