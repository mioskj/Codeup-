/*
题目描述
输入数组长度 n 
输入数组      a[1...n] 
输入查找个数m 
输入查找数字b[1...m] 
输出 YES or NO  查找有则YES 否则NO 。

输入
输入有多组数据。
每组输入n，然后输入n个整数，再输入m，然后再输入m个整数（1<=m<=n<=100）。

输出
如果在n个数组中输出YES否则输出NO。
*/
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 110;
bool bfind(int num[],int left,int right,int a)
{
  int mid;
  while(left<=right)
  {
    mid = (left + right)/2;
    if(num[mid]==a) return true;
    else if(a<num[mid])
    {
      right = mid - 1;
    }
    else
      left = mid +1;
  }
  return false;
}
int main()
{
  int n,m;
  while(scanf("%d",&n)!=EOF)
  {
    int a[maxn],b;
    for(int i = 0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    sort(a,a+n);
    while(m--)
    {
      scanf("%d",&b);
      if(bfind(a,0,n-1,b))
        printf("YES\n");
      else
        printf("NO\n");
    }
  }
  return 0;
}
