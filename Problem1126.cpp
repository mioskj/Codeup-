/*
题目描述
暑假到了，小明终于可以开心的看电视了。但是小明喜欢的节目太多了，他希望尽量多的看到完整的节目。
现在他把他喜欢的电视节目的转播时间表给你，你能帮他合理安排吗？

输入
输入包含多组测试数据。每组输入的第一行是一个整数n（n<=100），表示小明喜欢的节目的总数。
接下来n行，每行输入两个整数si和ei（1<=i<=n），表示第i个节目的开始和结束时间，为了简化问题，每个时间都用一个正整数表示。
当n=0时，输入结束。

输出
对于每组输入，输出能完整看到的电视节目的个数。
*/
#include<cstdio>
#include<algorithm>
using namespace std;
struct television
{
	int si;
	int ei;
};
bool cmp(television t1,television t2)
{
	if(t1.si == t2.si)
		return t1.ei<t2.ei;
	else
		return t1.si>t2.si;
}
int main()
{
	int n;
	while(scanf("%d",&n),n)
	{
		television tel[105];
        for(int i = 0;i<n;i++)
        {
        	scanf("%d %d",&tel[i].si,&tel[i].ei);
        }
        sort(tel,tel+n,cmp);
        int index = 1,lastsi = tel[0].si;
        for(int i = 1;i<n;i++){
        	if(tel[i].ei<=lastsi){
        		index++;
        		lastsi = tel[i].si;
        	}
        }
        printf("%d\n",index);

	}
}
