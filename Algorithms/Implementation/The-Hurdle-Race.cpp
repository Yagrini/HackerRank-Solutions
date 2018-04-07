#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , k , ci , maxi = 0;
    cin >> n >> k;
    while(n--){
        cin >> ci;
        maxi  = max(maxi , ci);
    }
    (maxi<k) ? cout << 0 << endl : cout << maxi-k << endl;
    return 0;
}



