#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long t , tmp=1;
    cin >> t ;
    while(t>3*tmp){
        tmp = (tmp*2) + 1;
    }
    cout << (tmp*3+1) - t << endl;
    return 0;
}



