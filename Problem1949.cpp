/*
题目描述
实现一个加法器，使其能够输出a+b的值。

输入
输入包括两个数a和b，其中a和b的位数不超过1000位。

输出
可能有多组测试数据，对于每组数据，
输出a+b的值。
*/
#include<cstdio>
#include<cstring>
struct bign
{
  int d[1010];
  int len;
  bign()
  {
    memset(d,0,sizeof(d));
    len = 0;
  }
};
bign change(char str[])
{
  bign a;
  a.len = strlen(str);
  for(int i = 0;i<a.len;i++)
  {
    a.d[i] = str[a.len-i-1] - '0';
  }
  return a;
}
bign add(bign b1,bign b2)
{
  bign c;
  int carry = 0;
  for(int i = 0;i<b1.len||i<b2.len;i++)
  {
    int temp = b1.d[i] + b2.d[i] +carry;
    c.d[c.len++] = temp%10;
    carry = temp/10;
  }
  if(carry!=0)
  {
    c.d[c.len++] = carry;
  }
  return c;
}
void bigprint(bign a)
{
  for(int i = a.len-1;i>=0;i--)
  {
    printf("%d",a.d[i]);
  }
  printf("\n");
}
int main()
{
  char str1[1000];
  char str2[1000];
  while(~scanf("%s%s",str1,str2))
  {
    bign a = change(str1);  
    bign b = change(str2); 
    bigprint(add(a,b));
  }
  return 0;
}
