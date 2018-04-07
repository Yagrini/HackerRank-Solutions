#include <cmath>
#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;
int main() {
    int n ;
    string str = "";
    stack<string> mystack;
    mystack.push(str);
    cin >> n;
    while(n--) {
        int x , k;
        cin >> x;
        if(x==1){
            cin >> str ;
            mystack.push(mystack.top()+str);
        }
        else if(x==2){
            cin >> k;
            mystack.push(mystack.top().substr(0,mystack.top().length()-k));
        }
        else if(x==3){
            cin >> k;
            cout << mystack.top()[k-1] << endl;
        }
        else{
            mystack.pop();
        }
    }
    
    return 0;
}


