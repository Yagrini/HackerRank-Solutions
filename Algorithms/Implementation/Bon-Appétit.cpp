#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , k , bcharged  , bactual = 0, ci;
    cin >> n >> k;
    for(int i =0; i<n ;i++){
        cin >> ci;
        if(i!=k) bactual += ci;
    }
    cin >> bcharged;
    bactual = bactual/2;
    if(bcharged==bactual) cout << "Bon Appetit" << endl;
    else cout << bcharged - bactual << endl;
    
    return 0;
}



