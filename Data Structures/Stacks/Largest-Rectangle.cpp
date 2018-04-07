#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;


long largestRectangle(vector <int> h) {
    int index;
    long long currentarea =  0, maxarea = 0;
    stack<int> mystack;
    
    for(index=0 ; index<h.size() ; index++){
       while(!mystack.empty() && h[index]<h[mystack.top()]){
                int top = mystack.top();
                mystack.pop();
                if(mystack.empty()){
                    currentarea = h[top]*index;
                }
                else{
                    currentarea = h[top]*(index-mystack.top()-1);
                }
                maxarea = max(maxarea,currentarea);
            }
            mystack.push(index);
    }
    while(!mystack.empty()){
        int top = mystack.top();
        mystack.pop();
        if(mystack.empty()){
            currentarea = h[top]*index;
        }
        else{
            currentarea = h[top]*(index-mystack.top()-1);
        }
        maxarea = max(maxarea,currentarea);
    }
    return maxarea;
}

int main() {
    int n ;
    cin >> n;
    vector<int> h;
    while(n--) {
        int x;
        cin >> x ;
        h.push_back(x);
    }
    cout << largestRectangle(h) << endl;
    return 0;
}



