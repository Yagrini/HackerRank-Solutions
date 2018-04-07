#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
bool reduce(string s){
    if(s.size()<=1) return false;
    for(int i=0 ; i<s.size() ; i++){
        if(i<s.size()-1 && s[i]==s[i+1])
            return false;
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    long maxi=0;
    string s;
    cin >> n >> s;
    
    int a = 26>s.size() ? s.size() : 26;
    for(int i=0 ; i<a ; i++){
        for(int k=i+1 ; k<a ; k++){
            char c1 = 'a'+i, c2 = 'a'+k;
            string str="";
            for(int j=0 ; j<n ;j++){
                if(s[j]==c1 || s[j]==c2) str+=s[j];
            }
            if(reduce(str) && maxi<str.size()) maxi = str.size();
        }
    }
    cout << maxi << endl;
    return 0;
}




