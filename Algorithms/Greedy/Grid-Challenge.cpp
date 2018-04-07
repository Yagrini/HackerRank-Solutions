#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string s1 , string s2 , int t){
    for(int i=0 ; i<s1.size() ; i++){
        if(s1[i]<s2[i]) return true;
    }
        return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t , n;
    cin >> t;
    while(t--){
        cin >> n;
        string str , output = "YES";
        vector<string> s(n);
        for(int i=0 ; i<n ; i++){
            cin >> str;
            sort(str.begin(),str.end());
            s[i] = str;
            if(i>0 && compare(s[i],s[i-1],t)) output="NO";
        }
        cout << output << endl;
    }
    return 0;
}



