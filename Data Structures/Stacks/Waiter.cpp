#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;

stack<int> reverseStack(stack<int> s)
{
    stack<int> r;
    while(!s.empty())
    {
        r.push(s.top());
        s.pop();
    }
    return r;
}
bool isPrime(int x){
    int a = sqrt(x);
    for(int i=2 ; i<=a ;i++){
        if(x % i == 0) return false;
    }
    return true;
}

int nextPrime(int x){
    bool t = true;
    int i ;
    while(t){
        i = ++x;
        if(isPrime(i)) t = false;
    }
    return i;
}
void printStack(stack<int> s) {
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}

void solveWaiter(stack<int> A , int q){
    int iPrime = 2;
    for(int i=1 ; i<=q && !A.empty(); i++){
        stack<int> B;
        stack<int> tmp;
        while(!A.empty()){
            if(A.top()%iPrime == 0) B.push(A.top());
            else tmp.push(A.top());
            A.pop();
        }
        A = reverseStack(reverseStack(tmp));
        printStack(B);
        iPrime = nextPrime(iPrime);
    }
    printStack(A);
}
int main() {
    int n , q;
    cin >> n >> q;
    stack<int> A;
    while(n--){
        int x;
        cin >> x ;
        A.push(x);
    }
    solveWaiter(A,q);
    return 0;
}
