#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    char c;
    long count = 0, numberofvalleys = 0;
    cin >> n;
    while(n--){
        cin >> c;
        long help = count;
        if(c=='U') count++;
        else if(c=='D') count--;
        if(help<0 && count == 0) numberofvalleys++;
    }
    cout << numberofvalleys << endl;
    return 0;
}



