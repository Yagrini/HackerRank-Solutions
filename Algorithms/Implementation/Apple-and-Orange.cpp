#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int s , t ,a ,b , n , m , mi , ni , countm = 0, countn = 0;
    cin >> s >> t >> a >> b >> m >> n;
    for(int i=0 ; i<m ; i++){
        cin >> mi;
        if((a+mi)>=s && (a+mi)<=t) countm++;
    }
    for(int i=0 ; i<n ; i++){
        cin >> ni;
        if((b+ni)>=s && (b+ni)<=t) countn++;
    }
    cout << countm << endl << countn << endl;
    return 0;
}



