#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    int n , xi;
    vector<int> U;
    cin >> s;
    for(int i=0 ; i<s.size() ; ){
        int count = s[i] - 'a' + 1;
        U.push_back(count);
        i++;
        while(i<s.size() && s[i]==s[i-1]){
            count += s[i] - 'a' + 1 ;
            U.push_back(count);
            i++;
        }
    }
    cin >> n;
    while(n--){
        cin >> xi;
        if(find(U.begin(), U.end(),xi)==U.end()) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}



