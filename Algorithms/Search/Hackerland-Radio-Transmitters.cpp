#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , k , number = 0;
    cin >> n >> k;
    vector<int> hackerland(n);
    for(int i=0 ; i<n ; i++){
        cin >> hackerland[i];
    }
    sort(hackerland.begin(), hackerland.end());
    for(int i=0 ; i<n ;){
        int j = i+1;
        while(j<n && hackerland[j]-hackerland[i]<=k) j++;
        i = j-1;
        while(j<n && hackerland[j]-hackerland[i]<=k) j++;
        i=j;
        number++;
    }
    cout << number << endl;
    return 0;
}
