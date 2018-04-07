#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long n , result = 2 , tmp = 2;
    cin >> n;
    for(int i=2 ; i<=n ; i++){
        tmp = (tmp*3)/2;
        result += tmp;
    }
    cout << result << endl;
    return 0;
}



