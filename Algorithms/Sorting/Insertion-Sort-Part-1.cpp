#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n ;
    cin >> n;
    vector<int> vec(n);
    for(int i=0 ; i<n ; i++) cin >> vec[i];
    int x = vec[n-1], index=n-2;
    while(index>=0 && x<vec[index]){
        for(int i=0 ; i<n-1 ; i++) {
            if(i==index) cout << vec[i] << " ";
            cout <<  vec[i] << " ";
        }
        cout << endl;
        index--;
    } bool t=true;
    for(int i=0 ; i<n ; i++) {
        if(x<=vec[i] && t) {
            cout << x << " ";
            t=false;
        }
        if(i!=n-1) cout <<  vec[i] << " ";
    }
    cout << endl;
    return 0;
}



