#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int numberofsteps(vector<char> s){
    int count = 0;
    for(int i=2 ; i<s.size() ; ){
        if(s[i]=='0' && s[i-1]=='1' && s[i-2]=='0') {
            count++;
            i+=3;
        }
        else i++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<char> string(n);
    for(int i=0 ; i<n ; i++) cin >> string[i];
    int numofsteps = numberofsteps(string);
    cout << numofsteps << endl;
}


