#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool pairCompare(const pair<int,int>& i, const pair<int,int>& j) {
    return i.second < j.second;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> p(n+1);
    vector<pair<int,int>> pp(n+1);
    for(int i=1 ; i<=n ; i++) cin >> p[i];
    for(int i=1 ; i<=n ; i++) {
        pp[i].second = p[p[i]];
        pp[i].first = i;
    }
    sort(pp.begin(),pp.end(),pairCompare);
    for(int i=1 ; i<=n ; i++) cout << pp[i].first << endl;
    return 0;
}



