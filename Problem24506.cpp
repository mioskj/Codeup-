/*题目描述
编写一个C程序，要求在屏幕上输出一下一行信息。

This is my first c program!

输入
无
输出
This is my first c program!
*/
#include<cstdio>

int main(){
	char str1[] = "********************";
	char str2[] = "Very Good!";
	char str3[] = "********************";
	printf("%s\n%s\n%s",str1,str2,str3);
	return 0;
}
