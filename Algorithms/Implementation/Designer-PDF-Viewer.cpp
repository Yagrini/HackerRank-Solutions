#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> heights(26);
    string s;
    for(int i=0 ; i<26 ; i++) cin >> heights[i];
    cin >> s;
    int maxheight = 0;
    for(int i=0 ; i<s.size() ; i++) maxheight=max(maxheight,heights[s[i]-'a']);
    cout << s.size() * maxheight << endl;
    return 0;
}



