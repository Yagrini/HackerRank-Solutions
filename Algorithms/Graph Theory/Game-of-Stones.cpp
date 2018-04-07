#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n , k;
    cin >> n;
    while(n--){
        cin >> k ;
        if(k%7==0 || k%7==1) cout <<  "Second" << endl;
        else cout << "First" << endl;
    }
    return 0;
}


