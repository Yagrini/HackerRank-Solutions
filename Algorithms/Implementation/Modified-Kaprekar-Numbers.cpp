#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int p , q ; bool t=false;
    cin >> p >> q;
    for(int i=p ; i<=q ;i++){
        string s = to_string((long)i*(long)i);
        long sub = s.size()/2;
        int x = atoi(s.substr(0,sub).c_str()) + atoi(s.substr(sub,s.size()).c_str());
        if(!t && x==i) t=true;
        if(x==i) cout << i << " " ;
    }
    if(!t) cout << "INVALID RANGE" << endl;
    return 0;
}




