#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , arri;
    cin >> n;
    vector<int> appears(100);
    for(int i=0; i<n ;i++){
        cin >> arri;
        appears[arri]++;
    }
    for(int i=0; i<100 ;i++){
        while(appears[i]>0){
            cout << i << " ";
            appears[i]--;
        }
    }
    cout << endl;
    return 0;
}



