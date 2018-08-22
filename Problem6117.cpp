/*
题目描述
Zhejiang University has 40000 students and provides 2500 courses. Now given the registered course list of each student, 
you are supposed to output the student name lists of all the courses.

输入
Each input file contains one test case. For each case, the first line contains 2 numbers: N (<=40000), the total number 
of students, and K (<=2500), the total number of courses. Then N lines follow, each contains a student's name (3 capital 
English letters plus a one-digit number), a positive number C (<=20) which is the number of courses that this student has 
registered, and then followed by C course numbers. For the sake of simplicity, the courses are numbered from 1 to K.

输出
For each test case, print the student name lists of all the courses in increasing order of the course numbers. For each course,
first print in one line the course number and the number of registered students, separated by a space. Then output the students
' names in alphabetical order. Each name occupies a line.
*/
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn = 2510;
vector<int> courseList[maxn];
int getId(char * studentName)
{
    int id = 0;
    for(int i = 0;i<3;i++)
    {
        id = id*26 + studentName[i] - 'A';
    }
    id = id*10 +studentName[3] - '0';
    return id;
}
void getName(int id,char*name)
{
    name[3] = (id%10 +'0');
    name[2] = (id/10%26 + 'A');
    name[1] = (id/10/26%26 + 'A');
    name[0] = (id/10/26/26 + 'A');
}
int main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    for(int i = 0;i<N;i++)
    {
        char stuName[5];
        int index;
        scanf("%s",stuName);
        int id = getId(stuName);
        scanf("%d",&index);
        for(int j = 0;j<index;j++){
            int course;
            scanf("%d",&course);
            courseList[course].push_back(id);
        }
    }

    for(int i = 1;i<=K;i++)
    {
        printf("%d %d\n",i,courseList[i].size());
        sort(courseList[i].begin(),courseList[i].end());
        for(int j = 0;j<courseList[i].size();j++)
        {
            char stuName[5];
            getName(courseList[i][j],stuName);
            printf("%s\n",stuName);
        }
    }
    return 0;
}

