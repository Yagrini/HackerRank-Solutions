#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , heighti , index=0;
    cin >> n;
    vector<int> height(n);
    for(int i=0 ; i<n ; i++) cin >> height[i];
    sort(height.begin(), height.end(),greater<int>());
    while(index<height.size() &&  height[index]==height[index+1]) index++;
    cout << index+1 << endl;
    return 0;
}




