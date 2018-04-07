#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string searchmaxmin(string s, char c , int index){
    int indexmin = index, valmin = s[index]-c;
    for(int i = index+1 ; i<s.size() ; i++){
        if((s[i]>c) && (s[i]-c<valmin)){
            indexmin = i;
            valmin = s[indexmin]-c;
        }
    }
    char tmp = s[indexmin];
    s[indexmin] = s[index-1];
    s[index-1] = tmp;
    string t = s.substr(index,s.size());
    sort(t.begin(), t.end());
    s = s.substr(0,index) + t;
    return s;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t , i;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        for(i=s.size()-1 ; i>0 ; i--){
            if(s[i]>s[i-1]){
                s = searchmaxmin(s, s[i-1], i);
                break;
            }
        }
        if(i==0) cout << "no answer" << endl;
        else cout << s << endl;
    }
    return 0;
}




