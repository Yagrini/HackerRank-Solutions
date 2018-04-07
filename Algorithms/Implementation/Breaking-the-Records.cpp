#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , high , low , highest = 0 , lowest = 0;
    cin >> n;
    vector<int> s(n);
    for(int i=0 ; i<n ; i++) {
        cin  >> s[i];
        if(i==0) {
            high = s[i];
            low = s[i];
        }
        if(i>0){
            if(s[i]>high){
                highest++;
                high = s[i];
            }
            if(s[i]<low){
                lowest++;
                low = s[i];
            }
        }
    }
    cout << highest << " " << lowest << endl;
    return 0;
}



