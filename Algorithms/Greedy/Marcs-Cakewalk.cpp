#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long n , counti = 1, count = 0;
    cin >> n ;
    vector<int> vec(n);
    for(int i=0 ; i<n ; i++) cin >> vec[i];
    sort(vec.begin(), vec.end(),greater<int>());
    for(int i=0 ; i<vec.size() ; i++){
        count += vec[i]*counti;
        counti *= 2;
    }
    cout << count << endl;
    return 0;
}



