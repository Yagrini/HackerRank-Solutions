#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q , j;
    string s , hackerrank="hackerrank";
    cin >> q;
    while(q--){
        cin >> s;
        j=0;
        for(int i=0 ; i<s.size() && j<hackerrank.size() ; i++){
            if(s[i]==hackerrank[j]) j++;
        }
        if(j==hackerrank.size()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}



