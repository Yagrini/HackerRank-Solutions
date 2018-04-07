#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long n , k , x , c = 0;
    vector<long> v;
    cin >> n >> k;
    while(n--){
        cin >> x;
        v.push_back(x);
        push_heap(v.begin(), v.end(), greater<int>());
    }
    while(v.front()<k){
        if(v.size()<2) {
            cout << -1 << endl;
            return 0;
        }
        long min = v.front();
        pop_heap (v.begin(),v.end(),greater<int>()); v.pop_back();
        long nextMin = v.front();
        pop_heap (v.begin(),v.end(),greater<int>()); v.pop_back();
        
        v.push_back(min + 2*nextMin);
        push_heap(v.begin(), v.end(), greater<int>());
        c++;
    }
    cout << c << endl;
    return 0;
}
