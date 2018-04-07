#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q , x , y , z;
    cin >> q;
    while(q--){
        cin >> x >> y >> z;
        if(abs(x-z)<abs(y-z)) cout << "Cat A" << endl;
        else if(abs(x-z)>abs(y-z)) cout << "Cat B" << endl;
        else cout << "Mouse C" << endl;
    }
    return 0;
}



