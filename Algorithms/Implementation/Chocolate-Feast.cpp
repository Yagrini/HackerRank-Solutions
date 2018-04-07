#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t , n , m , c;
    cin >> t;
    while(t--){
        int count = 0 , chocolates = 0;
        cin >> n >> c >>m;
        chocolates = n/c;
        count = chocolates/m + chocolates%m;
        chocolates = chocolates + chocolates/m;
        while(count>=m){
            chocolates += count/m;
            count = count/m + count%m;
        }
        cout << chocolates << endl;
    }
    return 0;
}



