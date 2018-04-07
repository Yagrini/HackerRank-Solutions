#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , count = 0;
    cin >> n;
    vector<int> v(n);
    for(int i=0 ; i<n ; i++) cin >> v[i];
    for(int i=0 ; i<n-1 ; i++){
        if(i == n-2 || n==n-3) count++;
        else if(i<n-2 && v[i+2]==0) {
            count++; i++;
        }
        else if(i<n-1 && v[i+1]==0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}



