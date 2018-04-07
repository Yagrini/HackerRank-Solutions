#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long **tab;

long solve(vector<int> &v,int size,int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n<0) return 0;
    
    else if(size<=0) return 0;
    
    else if(tab[n][size]==-1)
    {
        tab[n][size]=solve(v,size-1,n)+solve(v,size,n-v[size-1]); 
    }
    return tab[n][size];
}

int main() {
    int n,m;
    int var;
    cin >> n >> m;
    tab = new long*[n+1];
    for(int i=0;i<n+1;i++){
        tab[i]=new long[m+1];
        for(int j=0;j<m+1;j++)
        {
            tab[i][j]=-1;
        }
    }
    vector<int> c;
    for(int i=0;i<m;i++)
    {
        cin >> var;
        c.push_back(var);
    }
    cout << solve(c,m,n) << endl;
    return 0;
}
