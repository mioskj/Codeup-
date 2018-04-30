
/*
题目描述

立方根的逼近迭代方程是 y(n+1) = y(n)*2/3 + x/(3*y(n)*y(n)),其中y0=x.求给定的x经过n次迭代后立方根的值。


输入

输入有多组数据。
每组一行，输入x n。


输出

迭代n次后的立方根，double精度,保留小数点后面六位。
*/
#include<cstdio>

double cuberoot(int x,int n)
{
  double y1,y2;
  y1 = x;
  for(int i = 0;i<n;i++)
  {
    y2 = y1*2.0/3.0 + x/(3.0*y1*y1);
    y1 = y2;

  }
  return y2;
}
int main()
{
  int x,n;
  while(~scanf("%d %d",&x,&n))
  {
    printf("%.6f\n",cuberoot(x,n));
  }
  return 0;
}
