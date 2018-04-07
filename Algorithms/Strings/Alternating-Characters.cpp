#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int solve(string s){
    int count = 0;
    for(int i=0 ; i<s.size() ; i++){
        while(i<s.size()-1 && s[i]==s[i+1]){
            i++;
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    string s;
    while(n--){
        cin >> s;
        int number = solve(s);
        cout << number << endl;
    }
}


