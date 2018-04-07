#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long n = 5  , sum=0 , xi , maxi = 0 , mini = 1000000000;
    while(n--){
        cin >> xi;
        mini  = min(mini,xi);
        maxi  = max(maxi,xi);
        sum += xi;
    }
    cout << sum-maxi << " " << sum-mini << endl;
    return 0;
}




