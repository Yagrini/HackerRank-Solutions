#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
void iscommon(string a , string b){
    int tab[26] = {};
    string output = "NO";
    for(int i=0 ; i<a.length() ; i++){
        tab[a[i]-'a']++;
    }
    for(int i=0 ; i<b.length() ; i++){
        if(tab[b[i]-'a']>0){
            output = "YES";
            break;
        }
    }
    cout << output << endl;
}

int main() {
    int p;
    cin >> p ;
    while(p--){
        string a , b;
        cin >> a >> b;
        iscommon(a, b);
    }
    
}


