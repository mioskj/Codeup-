
/*
题目描述
归并排序是一个时间复杂度为O(nlogn)的算法，对于大量数据远远优于冒泡排序与插入排序。

这是一道排序练习题，数据量较大，请使用归并排序完成。


输入
第一行一个数字n，代表输入的组数

其后每组第一行输入一个数字m，代表待排序数字的个数

其后m行每行一个数据，大小在1～100000之间，互不相等，最多有10万个数据。

输出
升序输出排好序的数据，每行一个数字
*/
#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn = 100010;
void merge(int A[],int L1,int R1,int L2,int R2)
{
  int i = L1, j = L2,index = 0;
  int temp[maxn];
  while(i<=R1&&j<=R2)
  {
    if(A[i]>A[j]){
      temp[index++] = A[j++];
    }
    else{
      temp[index++] = A[i++];
    }
  }
  while(i<=R1) temp[index++] = A[i++];
  while(j<=R2) temp[index++] = A[j++];
  for(int i = 0;i<index;i++)
  {
    A[L1+i] = temp[i];
  }
  
}

void mergesort(int A[],int left,int right)
{
  if(left<right)
  {
    int mid = (left+right)/2;
    mergesort(A,left,mid);
    mergesort(A,mid+1,right);
    merge(A,left,mid,mid+1,right);
  }
}
int main()
{
  int n,m;
  int A[maxn] = {0};
  while(scanf("%d",&n)!=EOF)
  {
    while(n--)
    {
      scanf("%d",&m);
      for(int i = 0;i<m;i++)
      {
        scanf("%d",&A[i]);
      }
      mergesort(A,0,m-1);
      for(int i =0;i<m;i++)
      {
        printf("%d\n",A[i]);
      }
    }
  }
  return 0;
}
