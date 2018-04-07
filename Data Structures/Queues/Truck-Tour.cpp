#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;


void solve(vector<pair<int,int>> tab)
{
    for(int i=0;i<tab.size()-1;i++)
    {
        int petrol = tab[i].first - tab[i].second;
        int j=i+1;
        while(1)
        {
            if(i==j)
            {
                cout << i << endl;
                return;
                
            }
            if(petrol<0)
            {
                break;
            }
            petrol = petrol + tab[j].first - tab[j].second;
            j=(j+1)%tab.size();
        }
    }
}

int main() {
    int N;
    cin >> N;
    vector<pair<int,int>> tab;
    int p,d;
    while(N--)
    {
        cin >> p >> d;
        tab.push_back(make_pair(p,d));
    }
    
    solve(tab);
    return 0;
}
