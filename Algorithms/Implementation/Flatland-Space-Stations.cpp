#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , m , maxi = 0;
    cin>> n >> m;
    vector<int> station(m);
    for(int i=0 ; i<m ; i++) cin >> station[i];
    sort(station.begin(), station.end());
    for(int i=0 ; i<=station[0] ; i++) maxi = max(maxi, station[0]-i);
    for(int i=0 ; i<m-1 ; i++){
        for(int j = station[i] ; j<=station[i+1] ; j++) {
            maxi = max(maxi, min(j-station[i], station[i+1]-j));
        }
    }
    for(int i=station[m-1] ; i<n ; i++) maxi = max(maxi, i-station[m-1]);
    cout << maxi << endl;
    return 0;
}



