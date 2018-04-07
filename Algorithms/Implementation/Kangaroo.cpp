#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int x1 , x2 , v1 , v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if((x1>=x2 && v1>v2) || (x1<=x2 && v1<v2) || (v1==2 && x1!=x2)) cout << "NO" << endl;
    else if(x1==x2 && v1==v2) cout << "YES" << endl;
    else{
        int x = (v2*x1 - v1*x2)/(v2-v1);
        if((x-x1)%v1 == (x-x2)%v2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}



