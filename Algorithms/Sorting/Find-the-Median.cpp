#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    cout << arr[n/2] << endl;
    return 0;
}


