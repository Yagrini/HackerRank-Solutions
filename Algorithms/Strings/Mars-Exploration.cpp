#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s ;
    int count = 0;
    cin >> s;
    for(int i=0 ; i<s.size() ; i+=3){
        if(s[i]!='S') count++;
        if(s[i+1]!='O') count++;
        if(s[i+2]!='S') count++;
    }
    cout << count << endl;
    return 0;
}



