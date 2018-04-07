#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s) {
    // Complete this function
    stack<char> mystack;
    int i=0;
    while(i<s.length()){
        if(s[i]=='}') {
            if(mystack.size()==0 || mystack.top()!='{') return "NO";
            else mystack.pop();
        }
        else if(s[i]==')') {
            if(mystack.size()==0 || mystack.top()!='(') return "NO";
            else mystack.pop();
        }
        else if(s[i]==']') {
            if(mystack.size()==0 || mystack.top()!='[') return "NO";
            else mystack.pop();
        }
        else mystack.push(s[i]);
        i++;
    }
    if(mystack.size()>0) return "NO";
    return "YES";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}


