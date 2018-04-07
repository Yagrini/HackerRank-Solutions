#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n ;
    cin >> n;
    vector<int> arr(n) , closestNumbers;
    for(int i=0 ; i<n ; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    long mini = arr[1]-arr[0];
    for(int i=1 ; i<n ; i++){
        if((arr[i]-arr[i-1])<mini) {
            mini = arr[i]-arr[i-1];
            closestNumbers.erase(closestNumbers.begin(), closestNumbers.end());
            closestNumbers.push_back(arr[i-1]);
            closestNumbers.push_back(arr[i]);
        }
        else if((arr[i]-arr[i-1]) == mini){
            closestNumbers.push_back(arr[i-1]);
            closestNumbers.push_back(arr[i]);
        }
    }
    for(int i=0 ; i<closestNumbers.size() ; i++) cout << closestNumbers[i] << " ";
    cout<< endl;
    return 0;
}



