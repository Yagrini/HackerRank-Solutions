#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack<long long> mystack;
    long long N , x ;
    int query;
    cin >> N;
    for(long long i=0; i<N ; i++){
        cin >> query;
        if(query==1) {
            cin >> x;
            if(mystack.size()>0) mystack.push(max(x,mystack.top())) ;
            else mystack.push(x);
        }
        else if(query==2) {
            mystack.pop();
        }
        else {
            if(mystack.size()>0) cout << mystack.top() << endl;
            else cout << 0 << endl;
        }
    }
    return 0;
}



