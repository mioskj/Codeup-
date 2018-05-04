/*
题目描述
Goldbach's Conjecture: For any even number n greater than or equal to 4, there exists at least one pair of prime numbers 
p1 and p2 such that n = p1 + p2. 
This conjecture has not been proved nor refused yet. No one is sure whether this conjecture actually holds. However, one 
can find such a pair of prime numbers, if any, for a given even number. The problem here is to write a program that reports 
the number of all the pairs of prime numbers satisfying the condition in the conjecture for a given even number.

A sequence of even numbers is given as input. Corresponding to each number, the program should output the number of pairs 
mentioned above. Notice that we are interested in the number of essentially different pairs and therefore you should not 
count (p1, p2) and (p2, p1) separately as two different pairs.


输入
An integer is given in each input line. You may assume that each integer is even, and is greater than or equal to 4 and 
less than 2^15. The end of the input is indicated by a number 0.


输出
Each output line should contain an integer number. No other characters should appear in the output.

*/
#include<cstdio>
const int maxn = 33000;
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
int search(int a[],int left,int right,int x)
{
    int mid;
    while(left<=right)
    {
        mid = (left+right)/2;
        if(a[mid] == x) return mid;
        else if(a[mid]>x) right = mid -1;
        else left = mid +1;
    }
    return -1;
}
int main()
{
    find();
    int n,number;
    while(scanf("%d",&n),n)
    {
        number = 0;
        for(int i = 2;i<=n/2;i++)
        {
            if(search(prime,0,pNum,i)!=-1&&search(prime,0,pNum,n-i)!=-1)
                number++;
        }
        printf("%d\n",number);
    }
    return 0;
}
