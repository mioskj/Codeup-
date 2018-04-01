/*
题目描述
有3个整数a, b, c，由键盘输入，输出其中最大的数。

输入
以空格分割的三个整数。

输出
三个数中的最大值，末尾换行。
*/
#include<cstdio>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int max;
	if(a>b) max = a;
	else max =b;
	if(c>max) max = c;
	printf("%d",max);
	return 0;
}
