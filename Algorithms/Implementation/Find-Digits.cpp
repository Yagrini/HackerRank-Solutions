#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while(t--){
        int tab[10]={};
        long count  = 0;
        string str;
        cin >> str;
        for(int i=0 ; i<str.size() ; i++)  tab[str[i]-'0']++;
        for(int i=1 ; i<10 ; i++){
            if(atoi(str.c_str())%i==0) count += tab[i];
        }
        cout << count << endl;
    }
    return 0;
}



