#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , mini = 1000000000;
    cin >> n;
    vector<int> array(n);
    for(int i=0 ; i<n ; i++){
        cin >> array[i];
    }
    sort(array.begin(),array.end());
    for(int i=0 ; i<n-1 ; i++){
        mini = min(mini , abs(array[i]-array[i+1]));
    }
    cout << mini << endl;
    return 0;
}



