#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
bool anagram(string s1 , string s2){
    int tab1[26] = {};
    int tab2[26] = {};
    for(int i=0 ; i<s1.size() ; i++){
        tab1[s1[i]-'a']++;
        tab2[s2[i]-'a']++;
    }
    for(int i=0 ; i<26 ; i++){
        if(tab1[i]!=tab2[i]) return false;
    }
    return true ;
}

long numberofAnagrams(string s){
    long count  = 0;
    for(int i=0 ; i<s.size() ; i++){
        for(int c=1 ; i+c<=s.size() ; c++){
            for(int j=i+1 ; j+c<=s.size() ; j++){
                string s1 = s.substr(i,c);
                string s2 = s.substr(j,c);
                if(anagram(s1,s2)) count++;
            }
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << numberofAnagrams(s) << endl;
    }
    
}


