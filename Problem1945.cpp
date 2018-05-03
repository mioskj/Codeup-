/*
题目描述
输入一个整数n(2<=n<=10000)，要求输出所有从1到这个整数之间(不包括1和这个整数)个位为1的素数，如果没有则输出-1。

输入
输入有多组数据。
每组一行，输入n。

输出
输出所有从1到这个整数之间(不包括1和这个整数)个位为1的素数(素数之间用空格隔开，最后一个素数后面没有空格)，如果没有则输出-1。
*/
#include<cstdio>
const int maxn = 10010;
int prime[maxn],pNum = 0;
bool p[maxn] = {0};
void find()
{
    for(int i = 2;i<maxn;i++)
    {
        if(p[i] == false)
        {
            if(i%10 == 1)
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
    find();
    int n;
    int flag = 0;
    while(~scanf("%d",&n))
    {
        bool isfirst = true;
        for(int i = 0;i<pNum;i++)
        {
            if(prime[i]<n)
            {
                if(isfirst) {
                    printf("%d", prime[i]);
                    isfirst = false;
                }
                else
                {
                    printf(" %d",prime[i]);
                }
            }
        }
        if(isfirst)
            printf("-1");
        printf("\n");
    }
    return 0;
}
