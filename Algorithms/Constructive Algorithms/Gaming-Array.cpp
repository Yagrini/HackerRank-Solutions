#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t , n , ai;
    cin >> t;
    while(t--){
        int maxi = 0, count = 0;
        cin >> n;
        while(n--){
            cin >> ai;
            if(ai>maxi) {
                count++;
                maxi = ai;
            }
        }
        if(count%2==1) cout << "BOB" << endl;
        else cout << "ANDY" << endl;
    }
    return 0;
}




