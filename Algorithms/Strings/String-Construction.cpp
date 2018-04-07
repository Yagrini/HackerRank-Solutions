#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int minimumcost(string s){
    int tab[26] = {};
    int cost = 0;
    for(int i=0 ; i<s.size() ; i++){
        if(tab[s[i]-'a']==0) cost++;
        tab[s[i]-'a']++;
    }
    return cost;
}

int main() {
    int p;
    cin >> p ;
    while(p--){
        string s;
        cin >> s;
        cout << minimumcost(s) << endl;
    }
    
}


