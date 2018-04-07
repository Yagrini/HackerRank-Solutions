#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    vector<string> result;
    cin >> s;
    int r = floor(sqrt(s.size()));
    int c = r;
    while(r*c<s.size()) {
        if(r+1>c) c++;
        else r++;
    }
    for(int i=0 ; i<s.size() ;){
        if(i+c < s.size()) result.push_back(s.substr(i,c));
        else result.push_back(s.substr(i,s.size()));
        i+=c;
    }
    for(int i=0 ; i<c ; i++) {
        for(int j=0 ; j<r && i<result[j].size() ;j++)
            cout << result[j][i];
        cout << " " ;
    }
    return 0;
}



