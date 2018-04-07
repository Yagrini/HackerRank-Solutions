#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

void reduce(string s){
    string str = s;
    int size = s.size();
    for(int k=0 ; k<size/2 ;k++){
        s =  str;
        str = "";
        for(int i=0 ; i<s.size() ;){
            if(i<s.size()-1 && s[i]==s[i+1]) i+=2;
            else{
                str += s[i];
                i++;
            }
        }
    }
    if(str.size()>1) cout <<  str << endl;
    else cout << "Empty String" << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin >> s;
    reduce(s);
    return 0;
}
