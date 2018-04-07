#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void solve(vector<int> &line,int n)
{
    int tmp;
    int cou=0;
    for(int i=n-1;i>0;i--)
    {
        if(line[i]<line[i-1])
        {
            cou++;
            tmp = line[i];
            line[i]=line[i-1];
            line[i-1]=tmp;
        }
    }
    for(int i=n-1;i>0;i--)
    {
        if(line[i]<line[i-1])
        {
            cou++;
            tmp = line[i];
            line[i]=line[i-1];
            line[i-1]=tmp;
        }
    }
    if(is_sorted(line.begin(),line.end()))
    {
        cout << cou << endl;
    }else
    {
        cout << "Too chaotic" << endl;
    }
}


int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int tmp;
        vector<int> line;
        for(int i=0;i<n;i++)
        {
            cin >> tmp;
            line.push_back(tmp);
        }
        solve(line,n);
    }
    return 0;
}


