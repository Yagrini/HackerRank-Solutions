#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int solve(vector<int>& v , int entry , int exit){
    int mini = 3;
    for(int i=entry; i<=exit ; i++){
        if(v[i]==1) return 1;
        mini = min(v[i],mini);
    }
    return mini;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , t , entry , exit;
    cin >> n >> t;
    vector<int> width(n);
    for(int i=0 ; i<n ; i++) cin >> width[i];
    while(t--){
        cin >> entry >> exit;
        cout << solve(width,entry,exit) << endl;
    }
    return 0;
}




