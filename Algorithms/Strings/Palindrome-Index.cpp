#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
bool isPalindrome(string s){
    int halfLenght = s.size()/2;
    int length = s.size()-1;
    for(int i=0 ; i<halfLenght ; i++){
        if(s[i]!=s[length-i]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int index;
        if(isPalindrome(s)) index = -1;
        else{
            int halfLenght = s.size()/2;
            int length = s.size()-1;
            for(int i=0 ; i<halfLenght ; i++){
                if(s[i]!=s[length-i]){
                    if(isPalindrome(s.substr(0,i)+s.substr(i+1,s.size()))) index = i;
                    else index = length-i;
                    break;
                }
            }
        }
        cout << index << endl;
    }
    
}


