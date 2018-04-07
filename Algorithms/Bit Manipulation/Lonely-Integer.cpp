#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , a = 0;
    cin >> n;
    while(n--){
        int x;
        cin >> x ;
        a = a ^ x;
    }
    cout << a << endl;
    return 0;
}
