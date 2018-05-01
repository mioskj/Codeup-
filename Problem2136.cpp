/*
题目描述
The least common multiple (LCM) of a set of positive integers is the smallest positive integer which is divisible by all
the numbers in the set. For example, the LCM of 5, 7 and 15 is 105.

输入
Input will consist of multiple problem instances. The first line of the input will contain a single integer indicating the 
number of problem instances. Each instance will consist of a single line of the form m n1 n2 n3 ... nm where m is the number
of integers in the set and n1 ... nm are the integers. All integers will be positive and lie within the range of a 32-bit 
integer.

输出
For each problem instance, output a single line containing the corresponding LCM. All results will lie in the range of 
a 32-bit integer.
*/
#include<cstdio>
int gcd(int a,int b)
{
  if(b == 0) return a;
  return gcd(b,a%b);
}
int lcm(int a,int b)
{
  int temp;
  if(a<b){
    temp = a;
    a = b;
    b = temp;
  }
  return a/gcd(a,b)*b;
}
int main()
{
  int n,m,l;
  int a;
  scanf("%d",&n);
  while(n--)
  {
    scanf("%d",&m);
    scanf("%d",&a);
    l = lcm(a,1);
    for(int i = 1;i<m;i++)
    {
        scanf("%d",&a);
        l = lcm(a,l);
    }
    printf("%d\n",l);
  }
}
