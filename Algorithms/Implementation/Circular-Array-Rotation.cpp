#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , k , q , mi;
    cin >> n >> k >> q;
    k = k%n;
    vector<int> arr(n);
    for(int i=k ; i<n ; i++) cin >> arr[i];
    for(int i=0 ; i<k ; i++) cin >> arr[i];
    while(q--){
        cin >> mi;
        cout << arr[mi] << endl;
    }
    
    return 0;
}



