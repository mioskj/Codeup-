/*
题目描述
设置3个变量a, b, sum，其中a, b用来存放两个整数，sum用来存放a, b两个数的和，通过赋值（即采用赋值运算符"="）的方式将a初始化为123，b初始化为456，
并把两个变量相加的结果赋值给sum。

输入
无，变量在程序中以赋值的方式给定初值。

输出
sum=结果
*/

#include<cstdio>
int main(){
	int a = 123;
	int b = 456;
	int sum = a + b;
	printf("sum=%d",sum);
	return 0;
}
