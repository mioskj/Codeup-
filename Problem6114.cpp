/*
题目描述
Zhejiang University has 40000 students and provides 2500 courses. Now given the student name lists of all the courses, 
you are supposed to output the registered course list for each student who comes for a query.

输入
Each input file contains one test case. For each case, the first line contains 2 positive integers: N (<=40000), 
the number of students who look for their course lists, and K (<=2500), the total number of courses. Then the student 
name lists are given for the courses (numbered from 1 to K) in the following format: for each course i, first the course
index i and the number of registered students Ni (<= 200) are given in a line. Then in the next line, Ni student names are 
given. A student name consists of 3 capital English letters plus a one-digit number. Finally the last line contains the N 
names of students who come for a query. All the names and numbers in a line are separated by a space.

输出
For each test case, print your results in N lines. Each line corresponds to one student, in the following format: first 
print the student's name, then the total number of registered courses of that student, and finally the indices of the courses
in increasing order. The query results must be printed in the same order as input. All the data in a line must be separated by 
a space, with no extra space at the end of the line.
*/
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 26*26*26*10;
vector<int> studentList[maxn];
int getId(char * name)
{
    int id = 0;
    for(int i = 0;i<3;i++)
    {
        id = id*26 + name[i] -'A';
    }
    id = id*10 + name[3] - '0';
    return id;
}
int main()
{
    int N,K;
    scanf("%d %d",&N,&K);
    char studentName[5];
    int courseNum,stuNum;
    for(int i=0;i<K;i++){
        scanf("%d %d",&courseNum,&stuNum);
        for(int j = 0;j<stuNum;j++){
            scanf("%s",studentName);
            int id = getId(studentName);
            studentList[id].push_back(courseNum);
        }
    }

    for(int i = 0;i<N;i++){
        scanf("%s",studentName);
        int id = getId(studentName);
        sort(studentList[id].begin(),studentList[id].end());
        printf("%s %d",studentName,studentList[id].size());
        for(int j = 0;j<studentList[id].size();j++)
        {
            printf(" %d",studentList[id][j]);
        }
        printf("\n");
    }
    return 0;

}
