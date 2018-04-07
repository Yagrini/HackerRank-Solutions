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
    vector<int> arr(n) , left , right , equal;
    for(int i=0 ; i<n ; i++) {
        cin >> arr[i];
        if(i>0 && arr[i]>arr[0]) right.push_back(arr[i]);
        else if(i>0 && arr[i]<arr[0]) left.push_back(arr[i]);
        else  equal.push_back(arr[i]);
    }
    for(int i=0 ; i<left.size() ; i++) cout << left[i] << " ";
    for(int i=0 ; i<equal.size() ; i++) cout << equal[i] << " ";
    for(int i=0 ; i<right.size() ; i++) cout << right[i] << " ";
    cout << endl;
    return 0;
}



