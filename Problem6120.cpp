/*
题目描述
Given two strings S1 and S2, S = S1 - S2 is defined to be the remaining string after taking all the characters in S2 from S1. 
Your task is simply to calculate S1 - S2for any given strings. However, it might not be that simple to do it fast.

输入
Each input file contains one test case. Each case consists of two lines which gives S1 and S2, respectively. 
The string lengths of both strings are no more than 104. It is guaranteed that all the characters are visible 
ASCII codes and white space, and a new line character signals the end of a string.

输出
For each test case, print S1 - S2 in one line.
*/
#include<cstdio>
#include<cstring>
int main()
{
  char str1[10010];
  char str2[10010];
  while(gets(str1)!=NULL)
  {
    bool Hashtable[128] = {0};
    gets(str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for(int i = 0;i<len2;i++)
    {
      Hashtable[str2[i]] = 1;
    }
    for(int i = 0;i<len1;i++)
    {
      if(!Hashtable[str1[i]])
        printf("%c",str1[i]);
    }
    printf("\n");
  }
  return 0;
}
      
