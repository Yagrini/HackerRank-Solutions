#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool pairCompare(const pair<int,int>& i, const pair<int,int>& j) {
    return i.first > j.first;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , m , mi ;
    cin >> n;
    int index = n-1;
    vector<pair<int, int>> leaderboard(n);
    vector<int> AliceRanks;
    for(int i=0 ; i<n ; i++){
        cin >> leaderboard[i].first;
        if(i==0) leaderboard[i].second = 1;
        else if(leaderboard[i].first == leaderboard[i-1].first) leaderboard[i].second = leaderboard[i-1].second;
        else  leaderboard[i].second = leaderboard[i-1].second + 1;
    }
    cin >> m ;
    for(int i=0 ; i<m ; i++){
        cin >> mi;
        for(index ; index>=0 && leaderboard[index].first<mi; index--);
        if(index>=0 && leaderboard[index].first == mi) cout << leaderboard[index].second << endl;
        else if(index>=0 && leaderboard[index].first > mi) cout << leaderboard[index].second + 1 << endl;
        else if(index<0) cout << 1 << endl;
    }
    return 0;
}



