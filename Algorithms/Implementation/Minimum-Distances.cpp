#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool pairCompare(const pair<int, int>& i ,const pair<int, int>& j){
    return i.first<j.first;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , mini = 10000;
    cin >> n ;
    vector<pair<int, int>> arr(n);
    for(int i=0 ; i<n;i++) {
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(arr.begin(), arr.end(), pairCompare);
    for(int i=1 ; i<n;i++){
        if(arr[i].first==arr[i-1].first) mini = min(mini,abs(arr[i].second-arr[i-1].second));
    }
    if(mini<10000) cout << mini << endl;
    else cout << -1 << endl;
    return 0;
}




