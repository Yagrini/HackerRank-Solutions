#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> B(n);
        for(int i=0;i<n;i++) cin >> B[i];
        
        int low_next,hi_next,hilo,lohi,hihi,hi=0,low=0;
        
        for(int i=1 ; i<n ; i++){
            hilo = abs(B[i-1] - 1);
            lohi = abs(B[i] - 1);
            hihi = abs(B[i] - B[i-1]);
            
            low_next = max(low, hi+hilo);
            hi_next = max(hi+hihi, low+lohi);
            
            low = low_next;
            hi = hi_next;
        }
        cout <<  max(hi,low) << endl;
    }
    return 0;
}

