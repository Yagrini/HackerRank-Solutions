#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> socks(101);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , sock , count=0;
    cin >> n ;
    while(n--){
        cin >> sock;
        socks[sock]++;
    }
    for(int i=1 ; i<101 ; i++) count += socks[i]/2;
    cout << count << endl;
    return 0;
}



