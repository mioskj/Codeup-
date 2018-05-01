/*
题目描述

一个正整数,如果它能被7整除,或者它的十进制表示法中某个位数上的数字为7,
则称其为与7相关的数.现求所有小于等于n(n<100)的与7无关的正整数的平方和。


输入

案例可能有多组。对于每个测试案例输入为一行,正整数n,(n<100)


输出

对于每个测试案例输出一行，输出小于等于n的与7无关的正整数的平方和。
*/
#include<cstdio>
bool relate7(int n)
{
  if(n%7==0) return false;
  else if(n%10==7||n/10 == 7)return false;
  else return true;
}
int main()
{
  int n,sum;
  while(~scanf("%d",&n))
  {
    sum = 0;
    for(int i = 1;i<=n;i++)
    {
      if(relate7(i))
        sum +=i*i;
    }
    printf("%d\n",sum);
  }
}
