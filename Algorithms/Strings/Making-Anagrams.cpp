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
    for(int i=0 ; i<s1.length() ; i++){
        tab1[s1[i]-'a']++;
    }
    for(int i=0 ; i<s2.length() ; i++){
        tab2[s2[i]-'a']++;
    }
    for(int i=0 ; i<26 ; i++){
        count += abs(tab1[i]-tab2[i]);
    }
    return count ;
}

int main() {
    string a , b;
    cin >> a >> b;
    cout << anagram(a,b) << endl;
    
}


