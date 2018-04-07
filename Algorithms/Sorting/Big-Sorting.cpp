#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
#include <functional>
#include <queue>
using namespace std;

struct Compare{
    bool operator() (const string& str1, const string& str2)
    {
        if(str1.size()>str2.size()) return true;
        if(str1.size()<str2.size()) return false;
        for(int i=0 ; i<str1.size() ; i++){
            int str1i = str1[i] - '0';
            int str2i = str2[i] - '0';
            if(str1i>str2i) return true;
            if(str1i<str2i) return false;
        }
        return false;
    }
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    priority_queue<string,vector<string>,Compare> bigSorting;
    int n ;
    string s;
    cin >> n ;
    while(n--){
        cin >> s ;
        bigSorting.push(s);
    }
    while(!bigSorting.empty()){
        cout << bigSorting.top() << endl;
        bigSorting.pop();
    }
    return 0;
}
