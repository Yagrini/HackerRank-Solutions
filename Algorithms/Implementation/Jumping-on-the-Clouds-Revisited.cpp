#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , k , ei , e = 100;
    cin >> n >> k ;
    for(int i=0 ; i<n ; i++) {
        cin >> ei;
        if(i%k == 0){
            e = e -1 - ei*2;
        }
    }
    cout << e << endl;
    return 0;
}



