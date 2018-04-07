#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    string s;
    cin >> n;
    
    while (n--)
    {
        cin >> s;
        bool valid = false;
        long firstx = -1;
        
        for (int i = 1; i <= s.length()/2; ++i) {
            long x = stol(s.substr(0,i));
            firstx = x;
            string test = to_string(x);
            while (test.length() < s.length()) {
                test += to_string(++x);
            }
            
            if (test == s) {
                valid = true;
                break;
            }
        }
        valid ? cout << "YES " << firstx << endl : cout <<"NO" << endl;
    }
    return 0;
}



