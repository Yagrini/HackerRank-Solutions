#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , k , count=0;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0 ; i<n ;i++){
        cin >> a[i];
        int j = i-1;
        while(j>=0){
            if((a[i]+a[j])%k==0) count++;
            j--;
        }
    }
    cout << count << endl;
    return 0;
}



