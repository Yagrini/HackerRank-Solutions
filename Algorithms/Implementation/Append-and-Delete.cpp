#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s , t;
    int k , i;
    cin >> s >> t >> k;
    long x = k-s.size()-t.size();
    if(x>=0) cout << "Yes" << endl;
    else{
        for(i = 0 ; i<t.size() && i<s.size() && t[i]==s[i]; i++);
        long a = k - (s.size() - i), b = t.size() - i;
        if(a>=b && (a-b)%2==0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}




