#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int anagram(string s1 , string s2){
    int tab1[26] = {};
    int tab2[26] = {};
    int count = 0 ;
    for(int i=0 ; i<s1.size() ; i++){
        tab1[s1[i]-'a']++;
        tab2[s2[i]-'a']++;
    }
    for(int i=0 ; i<26 ; i++){
        count += (tab1[i]-tab2[i]>0 ) ? tab1[i]-tab2[i] : 0;
    }
    return count ;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if (s.size()%2==1) cout << -1 << endl;
        else{
            cout << anagram(s.substr(0,s.size()/2),s.substr(s.size()/2,s.size())) << endl;
        }
    }
    
}


