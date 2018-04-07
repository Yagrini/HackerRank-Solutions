#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int arr[26]={};
    int n  , gemstones = 0;;
    cin >> n ;
    for(int i=0 ; i<n ; i++){
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        for(int i=0 ; i<s.size() ; i++){
            while(i<s.size()-1 && s[i]==s[i+1]) i++;
            arr[s[i]-'a']++;
        }
    }
    for(int i=0 ; i<26 ; i++){
        if(arr[i]==n) gemstones++;
    }
    cout << gemstones << endl;
    return 0;
}



