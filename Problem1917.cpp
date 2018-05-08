/*
题目描述
输入一个正整数N，输出N的阶乘。

输入
正整数N(0<=N<=1000)

输出
输入可能包括多组数据，对于每一组输入数据，输出N的阶乘
*/
#include<cstdio>
#include<cstring>
struct bign
{
  int d[3000];
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
bign mul(bign a,int b)
{
  bign c;
  int carry = 0;
  for(int i = 0;i<a.len;i++)
  {
    int temp = a.d[i]*b + carry;
    c.d[c.len++] = temp%10;
    carry = temp/10;
  }
  while(carry!=0)
  {
    c.d[c.len++] = carry%10;
    carry/=10;
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
  int N;
  while(~scanf("%d",&N))
  {
    char str1[3000];

    if(N==0)
      printf("1\n");
    else{
      str1[0] = '1';
      bign b = change(str1);
      for(int i = 1;i<=N;i++)
      {
        b = mul(b,i);
      }
      bigprint(b);
    }  
  }
  return 0;
  
}
