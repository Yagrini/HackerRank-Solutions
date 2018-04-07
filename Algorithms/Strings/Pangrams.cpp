#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s , output = "pangram";
    getline(cin,s);
    int tab[26]={} , count=0;
    for(int i=0 ; i<s.size() ; i++){
        if((s[i]>='a' && s[i]<='z') && (tab[s[i]-'a']==0)) {
            tab[s[i]-'a']++;
            count++;
        }
        else if((s[i]>='A' && s[i]<='Z') && (tab[s[i]-'A']==0))  {
            tab[s[i]-'A']++;
            count++;
        }
        if(count==26) break;
    }
    if(count<26) output = "not pangram";
    cout << output << endl;
    return 0;
}




