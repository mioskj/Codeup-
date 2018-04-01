/*
题目描述
从键盘上输入两个整数，并输出这两个数的和，即你的任务是计算a+b。

输入
输入空格分隔的两个整数

输出
对于用空格分隔的两个整数，求其和。
*/
#include<cstdio>

int main(){
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	int sum = num1 + num2;
	printf("%d",sum);
	return 0;
}
