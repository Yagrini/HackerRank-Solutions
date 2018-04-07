#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t , x , y;
    cin >> t ;
    while(t--){
        cin >> x >> y;
        int x1 = x%4 , y1 = y%4;
        if((x1>=1 && x1<=2) && (y1>=1 && y1<=2)) cout << "Second" << endl;
        else cout << "First" << endl;
    }
    
    return 0;
}



