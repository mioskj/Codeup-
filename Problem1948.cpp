/*
题目描述
输入n个整数,依次输出每个数的约数的个数。

输入
输入的第一行为N，即数组的个数(N<=1000)
接下来的1行包括N个整数，其中每个数的范围为(1<=Num<=1000000000)
当N=0时输入结束。

输出
可能有多组输入数据，对于每组输入数据，
输出N行，其中每一行对应上面的一个数的约数的个数。
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
    int Num;
    int sqr;
    int s;
    while(scanf("%d",&n),n)
    {
        while(n--)
        {
            s = 1;
            scanf("%d",&Num);
            sqr =(int)sqrt(Num);
            for(int i = 0;i<pNum&&prime[i]<=sqr;i++)
            {
                index = 0;
                while(Num%prime[i]==0)
                {
                    index++;
                    Num/=prime[i];
                }
                if(index>0)
                {
                    index++;
                    s*=index;
                }
                if(Num==1) break;
            }
            if(Num!=1)
            {
                s*=2;
            }
            printf("%d\n",s);
        }
    }
    return 0;
}
