#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int actd , actm , acty, expd, expm , expy, fine = 0;
    cin >> actd >> actm >> acty>> expd >> expm >> expy;
    if(acty>expy) fine = 10000;
    else if(acty==expy && actm>expm) fine = 500 * (actm-expm);
    else if(acty==expy && actm==expm && actd>expd) fine = 15 * (actd-expd);
    cout << fine << endl;
    return 0;
}



