#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , ai , count=0;
    vector<int> arr(101);
    cin >> n;
    while(n--){
        cin >> ai;
        arr[ai]++;
    }
    sort(arr.begin(),arr.end(), greater<int>());
    for(int i=1 ; i<arr.size() && arr[i]>0;i++) count += arr[i];
    cout << count << endl;
    return 0;
}



