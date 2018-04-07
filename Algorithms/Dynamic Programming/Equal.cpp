#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t , n;
    cin >> t;
    while(t--){
        int mini = 1000000000 , output = 1000000000 ;
        cin >> n ;
        vector<int> vec(n);
        for(int i=0 ; i<n ; i++){
            cin >> vec[i];
            mini = min(mini,vec[i]);
        }
        for(int k=0 ; k<5 ; k++){
            int count = 0;
            for(int i=0 ; i<n ; i++){
                int ai = vec[i] - (mini - k);
                count = count + (ai/5) + ((ai%5)/2) + ((ai%5)%2);
            }
            output = min(output,count);
        }
        cout << output << endl;
    }
    return 0;
}




