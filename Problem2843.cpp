/*
题目描述
输入n个整数，用快速排序的方法进行排序 

Input

第一行数字n 代表接下来有n个整数 
接下来n行，每行一个整数 

Output

Output 

升序输出排序结果 
每行一个数据 
*/#include<cstdio>
#include<cmath>
#include<ctime>
#include<algorithm>
#include<cstdlib>
using namespace std;
const int maxn = 5010;
int partition(int A[],int left, int right)
{
    int p = (round(1.0*rand()/RAND_MAX*(right-left)+left));
    swap(A[p],A[left]);
    int temp = A[left];
    while(left<right)
    {
        while(left<right&&A[right]>temp) right--;
        A[left] = A[right];
        while(left<right&&A[left]<temp) left++;
        A[right] = A[left];
    }
    A[left] = temp;
    return left;
}
void quicksort(int A[],int left, int right)
{
    if(left<right)
    {
        int pos = partition(A,left,right);
        quicksort(A,left,pos-1);
        quicksort(A,pos+1,right);
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int n;
    int num[maxn];
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    quicksort(num,0,n-1);
    for(int i = 0;i<n;i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}
