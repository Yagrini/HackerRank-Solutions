#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;
stack<int>  print(stack<int> mystack, stack<int> cpt){
    long long size = mystack.size();
    stack<int> toprint;
    while(!cpt.empty() && size-cpt.top()>0){
        while(!cpt.empty() && size-cpt.top() == 1) {
            toprint.push(mystack.top());
            cpt.pop();
        }
        mystack.pop();
        size--;
    }
    return toprint;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    stack<int> myqueue;
    cin >> n ;
    stack<int> cpt;
    int c = 0;
    while(n--){
        int x;
        cin >> x ;
        if(x==1){
            int k;
            cin >> k;
            myqueue.push(k);
        }
        else if(x==2) {
            c++;
        }
        else cpt.push(c);
    }
    stack<int> toprint = print(myqueue,cpt);
    while(!toprint.empty()){
        cout << toprint.top() << endl;
        toprint.pop();
    }
    return 0;
}


