/*
题目描述
先输入一组数，然后输入其分组，按照分组统计出现次数并输出，参见样例。

输入
输入第一行表示样例数m，对于每个样例，第一行为数的个数n，接下来两行分别有n个数，第一行有n个数，第二行的n个数分别对应上一行每个数的分组，n不超过100。

输出
输出m行，格式参见样例，按从小到大排。
*/
#include<iostream>  
#include<map>  
#include<vector>  
#include<set>  
#include<algorithm>  
using namespace std;  
  
int main()  
{  
    int m, n,temp;  
    pair<int, int> p; vector<int> v,v1,v2;  
    set<int> s, ss; int count;  
    vector<pair<int, int> > vv;  
    cin >> m;
    while (m--)  
    {  
        cin >> n;
        for (int i = 0; i < n; i++)  
        {  
            cin >> temp;  
            v.push_back(temp);
            s.insert(temp);
        }  
        for (set<int>::iterator it = s.begin(); it != s.end(); it++)  
        { 
            v1.push_back(*(it)); 
        }  
        for (int i = 0; i < n; i++)  
        {  
            cin >> temp;  
            p.first = temp;  
            p.second = v[i];  
            vv.push_back(p);
            ss.insert(temp);  
              
        }  
        for (set<int>::iterator it = ss.begin(); it != ss.end(); it++)  
        {  
            v2.push_back(*(it));
        }  
        count = 0;  
        for (int i = 0; i < v2.size(); i++)
        {
            cout << v2[i] << "={";  
            for (int j = 0; j < v1.size(); j++)  
            {
                cout << v1[j] << "=";  
                for (int k = 0;k<vv.size();k++)  
                {
                    if (vv[k].first == v2[i] && vv[k].second == v1[j])
                        count++;  
                }  
                cout << count;  
                count = 0;
                if (j != v1.size() - 1)  
                    cout << ",";  
            }  
            cout << "}" << endl;  
        }  
        v.clear(); v1.clear(); v2.clear(); vv.clear();  
        s.clear(); ss.clear();
          
    }  
}  
