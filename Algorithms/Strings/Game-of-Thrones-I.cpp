#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
void solve(string s){
    int tab[26] = {};
    bool yes = true;
    string output = "YES";
    for(int i=0 ; i<s.length() ; i++){
        tab[s[i]-'a']++;
    }
    for(int i=0 ; i<26 ; i++){
        if(tab[i]%2==1 && yes) yes=false;
        else if(tab[i]%2==1 && !yes) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    string s;
    cin >> s;
    solve(s) ;
}


