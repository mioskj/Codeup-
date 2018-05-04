/*
题目描述
Output the k-th prime number.

输入
k≤10000

输出
The k-th prime number.
*/
#include<cstdio>
const int maxn = 1000000;
bool p[maxn] = {0};
int pNum = 0;
int prime[maxn] = {0};
void find()
{
    for(int i = 2;i<maxn;i++)
    {
        if(p[i]==false)
        {
            prime[pNum++] = i;
            for(int j = i+i;j<maxn;j+=i)
            {
                p[j] = true;
            }
        }
    }
}
int main()
{
    int k;
    find();
    while(~scanf("%d",&k))
    {
        printf("%d\n",prime[k-1]);
    }
    return 0;
}
