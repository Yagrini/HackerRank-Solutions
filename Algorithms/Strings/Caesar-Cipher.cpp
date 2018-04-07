#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
char tab[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char tab2[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , k;
    string s;
    cin >> n >> s >> k;
    for(int i=0 ; i<n ; i++){
        if(s[i]<='z' && s[i]>='a') cout << tab[(s[i]-'a' + k)%26];
        else if(s[i]<='Z' && s[i]>='A') cout << tab2[(s[i]-'A' + k)%26];
        else cout << s[i] ;
    }
    cout << endl;
    return 0;
}




