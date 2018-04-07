#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
bool pairCompare(const pair<int,int>& i, const pair<int,int>& j) {
    return i.first < j.first;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t , m , n;
    cin >> t;
    while(t--){
        cin >> m >> n;
        vector<pair<int,int>> vec(n);
        for(int i=0 ; i<n ; i++){
            cin >> vec[i].first;
            vec[i].second=i+1;
        }
        sort(vec.begin(), vec.end(), pairCompare);
        bool t = true;
        for(int i=0 ; i<n && t; i++){
            for(int j=n-1 ; j>i ; j--){
                if(m == vec[i].first+vec[j].first) {
                    cout << min(vec[i].second,vec[j].second) << " " << max(vec[i].second,vec[j].second) << endl;
                    t=false;
                    break;
                }
                if(m > vec[i].first+vec[j].first) break;
            }
        }
    }
    return 0;
}



