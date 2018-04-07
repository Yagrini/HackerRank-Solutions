#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
int minimumOperations(string s){
    int count = 0;
    int demilength = s.size()/2;
    int length = s.size()-1;
    for(int i=0 ; i<demilength ; i++){
        count += abs(s[i] - s[length-i]);
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int numberofoperation = minimumOperations(s);
        cout << numberofoperation << endl;
    }
    
}


