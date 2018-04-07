#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n ;
    cin >> n ;
    for(int i=1 ; i<=n ; i++){
        for(int j=n ; j>i  ; j--)   cout << " ";
        for(int j=i ; j>0 ; j--)  cout << "#";
        cout << endl;
    }
    return 0;
}




