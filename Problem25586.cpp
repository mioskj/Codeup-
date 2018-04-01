/*
求1+2+3+...+100，

要求用while语句实现
*/
#include<cstdio>
int main(){
	int sum = 0,n = 1;
	while(n<=100)
	{
	  sum+=n;
	  ++n;
	}
	printf("%d\n",sum);
	return 0;
} 
