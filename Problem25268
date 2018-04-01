/*
题目描述
求一元二次方程ax2+bx+c=0的根，三个系数a, b, c由键盘输入，且a不能为0，且保证b2-4ac>0。

程序中所涉及的变量均为double类型。

输入
以空格分隔的一元二次方程的三个系数，双精度double类型

输出
分行输出两个根如下（注意末尾的换行）：

r1=第一个根

r2=第二个根

结果输出时，宽度占7位，其中小数部分2位。
*/
#include<cstdio>
#include<cmath>
int main(){
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	double delta = sqrt(b*b-4*a*c);
	double r1 = (-b+delta)/2;
	double r2 = (-b-delta)/2;
	printf("r1=%7.2f\nr2=%7.2f\n",r1,r2);
	return 0;
}
	
