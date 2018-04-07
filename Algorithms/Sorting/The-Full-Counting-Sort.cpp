#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , arri;
    string s;
    cin >> n;
    vector<int> appears(100);
    vector<string> strings(100);
    for(int i=0; i<n ;i++){
        cin >> arri;
        cin >> s;
        appears[arri]++;
        if(i<n/2) strings[arri] += "- ";
        else strings[arri] += s + " ";
    }
    for(int i=0; i<100 ;i++){
        if(appears[i]>0)
            cout << strings[i] ;
    }
    cout << endl;
    return 0;
}



