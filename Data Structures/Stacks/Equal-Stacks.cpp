#include <cmath>
#include <cstdio>
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

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack<int> stack1 , stack2 , stack3;
    int n1 , n2 , n3;
    int sum1=0 , sum2=0 , sum3=0;
    cin >> n1 >> n2 >> n3;
    for(int i=0 ; i<n1 ; i++) {
        int x;
        cin >> x;
        stack1.push(x);
        sum1 += x;
    }
    for(int i=0 ; i<n2 ; i++) {
        int x;
        cin >> x;
        stack2.push(x);
        sum2 += x;
    }
    for(int i=0 ; i<n3 ; i++) {
        int x;
        cin >> x;
        stack3.push(x);
        sum3 += x;
    }
    stack1 = reverseStack(stack1);
    stack2 = reverseStack(stack2);
    stack3 = reverseStack(stack3);
    
    while(!stack1.empty() && !stack2.empty() && !stack3.empty()){
        if(sum1==sum2 && sum2==sum3) {
            cout << sum1 << endl;
            return 0;
        }
        int maxi = max(sum1,max(sum2,sum3));
        if(sum1>=maxi){
            sum1 -= stack1.top();
            stack1.pop();
        }
        if(sum2>=maxi){
            sum2 -= stack2.top();
            stack2.pop();
        }
        if(sum3>=maxi){
            sum3 -= stack3.top();
            stack3.pop();
        }
    }
    cout << 0 << endl;
    return 0;
}


