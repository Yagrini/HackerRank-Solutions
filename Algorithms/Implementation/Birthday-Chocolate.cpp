#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , m , d ;
    long count = 0;
    cin >> n;
    vector<int> s(n);
    for(int i=0 ; i<n ; i++) cin >> s[i];
    cin >> d >> m ;
    for(int i=m-1 ; i<n ; i++){
        int sum = 0 , k=i;
        while(k>=(i-m+1)){
            sum+=s[k];
            k--;
        }
        if(sum == d) count++;
    }
    cout << count << endl;
    return 0;
}



