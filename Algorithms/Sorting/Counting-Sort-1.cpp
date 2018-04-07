#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , arri;
    cin >> n;
    int appears[100] = {};
    for(int i=0; i<n ;i++){
        cin >> arri;
        appears[arri]++;
    }
    for(int i=0 ; i<100 ; i++) cout << appears[i] << " ";
    cout << endl;
    return 0;
}



