#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t ;
    cin >> t ;
    while (t--){
        string s , r , output="Funny";
        cin >> s;
        r = s;
        reverse(r.begin(), r.end());
        for(int i=1 ; i<s.size() ; i++){
            if(abs(s[i]-s[i-1]) != abs(r[i]-r[i-1])){
                output = "Not Funny";
            }
        }
        cout << output << endl;
    }
     return 0;
}



