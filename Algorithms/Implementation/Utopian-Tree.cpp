#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , t;
    cin >> t ;
    while(t--){
        cin >> n;
        int height = 1;
        for(int i=0 ; i<n ; i++){
            if(i%2==1) height++;
            else height *= 2;
        }
        cout << height << endl;
    }
    return 0;
}



