#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int l , r , xori , max = 0;
    cin >> l >> r;
    xori = l ^ r;
    while(xori > 0){
        max <<= 1;
        max |= 1;
        xori >>= 1;
    }
    cout << max << endl;
    return 0;
}


