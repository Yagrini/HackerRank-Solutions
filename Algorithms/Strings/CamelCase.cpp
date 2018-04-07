#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str;
    int count = 1;
    cin >> str;
    for(int i=0 ; i<str.size() ; i++) {
        if(str[i]>='A' && str[i]<='Z')  count++;
    }
    cout << count << endl;
    return 0;
}


