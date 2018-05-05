/*
题目描述
求正整数N(N>1)的质因数的个数。
相同的质因数需要重复计算。如120=2*2*2*3*5，共有5个质因数。

输入
可能有多组测试数据，每组测试数据的输入是一个正整数N，(1<N<10^9)。

输出
对于每组数据，输出N的质因数的个数。
*/
#include<cstdio>
#include<cmath>
using namespace std;
const int maxn = 100010;
bool p[maxn] = {0};
int prime[maxn];
int pNum = 0;
void find_prime()
{
    for(int i = 2;i<maxn;i++)
    {
        if(p[i] == false)
        {
            prime[pNum++] = i;
        }
        for(int j = i+i;j<maxn;j+=i)
        {
            p[j] = true;
        }
    }
}
int main()
{
    find_prime();
    int n,index;
    int sqr;
    while(~scanf("%d",&n))
    {
        sqr =(int)sqrt(n);
        index = 0;
        for(int i = 0;i<pNum&&prime[i]<=sqr;i++)
        {
            while(n%prime[i]==0)
            {
                index++;
                n/=prime[i];
            }
            if(n==1) break;
        }
        if(n!=1)
        {
            index++;
        }
        printf("%d\n",index);
    }
    return 0;
}
