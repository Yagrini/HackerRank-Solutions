#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
bool isvalid(string s){
    vector<int> tab(26);
    for(int i=0 ; i<s.size() ; i++) tab[s[i]-'a']++;
    int i , j ,count = 0;
    sort(tab.begin(), tab.end(), greater<int>());
    for(i=0 ; i<26 && tab[i]>0 ; i++){
        if(tab[i]==1){
            count++;
        }
    }
    if(count==i) return true;
    else if(count > 1) return false;
    else{
        for(i=0 ; i<26 && tab[i]>0 ; i++){
            if(tab[i]==1){
                tab[i]--;
                break;
            }
        }
        sort(tab.begin(), tab.end(), greater<int>());
        for(j=1 ; j<26 && tab[j]>0  && tab[j]==tab[j-1]; j++);
        if(tab[j]==0 || j==26) return true;
        bool valid = false;
        for(i=0 ; i<26 && tab[i]>0 && !valid; i++){
            int tmp = tab[i]--;
            for(j=1 ; j<26 && tab[j]>0  ; j++){
                if(tab[j]!=tab[j-1]) break;
            }
            if(j==26 || tab[j]==0) return true;
            tab[i]=tmp;
        }
        return false;
    }
}

int main() {
    string s;
    cin >> s;
    bool valid = isvalid(s);
    if(valid) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}


