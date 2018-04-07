#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

void giveMax(vector<int> A, int n){
    int maxor = 0;
    stack<int> mystack;
    for(int i=0 ; i<n ;i++){
        while(!mystack.empty()){
            maxor = max(maxor,A[i] ^ mystack.top());
            if(A[i]<mystack.top()) mystack.pop();
            else break;
        }
        mystack.push(A[i]);
    }
    cout << maxor << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n ;
    cin >> n ;
    vector<int> A(n);
    for(int i=0 ; i<n ; i++) cin >> A[i];
    giveMax(A,n);
    return 0;
}


