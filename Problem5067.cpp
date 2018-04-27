/*
给定一个长度为n（1≤n≤1,000,000）的无序正整数序列，以及另一个数k（1≤k≤1,000,000）（关于第k大的数：例如序列{1,2,3,4,5,6}中第3大的数是4。）

输入
第一行两个正整数m,n。

第二行为n个正整数。

输出
第k大的数。

*/
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<algorithm>
using namespace std;
const int maxn = 1000010;
int randPartition(int A[],int left,int right)
{
  int p = round(1.0*rand()/RAND_MAX*(right-left)+left);
  swap(A[p],A[left]);
  int temp = A[left];
  while(left<right)
  {
    while(left<right&&temp<A[right]) right--;
    A[left] = A[right];
    while(left<right&&temp>=A[left]) left++;
    A[right] = A[left];
  } 
  A[left] = temp;
  return left;
}
int randSelect(int A[],int left,int right,int k)
{
  if(left == right) return A[left];
  int p = randPartition(A,left,right);
  int M = p - left + 1;
  if(k==M) return A[p];
  if(k<M)
  {
    return randSelect(A,left,p-1,k);
  }
  else
    return randSelect(A,p+1,right,k);

}
int main()
{
  srand((unsigned)time(NULL));
  int m,n;
  int knumber;
  int num[maxn];
  while(scanf("%d %d",&m,&n)!=EOF)
  {
    for(int i = 0;i<m;i++)
    {
      scanf("%d",&num[i]);
    }
    knumber = randSelect(num,0,m-1,m-n+1);
    printf("%d\n",knumber);
  }
  return 0;
}
