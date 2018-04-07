#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, sum=0 , count=0;
    cin >> n;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum%2==1) cout << "NO" << endl;
    else{
        for(int i=0 ; i<n ; i++){
            if(arr[i]%2==1){
                arr[i+1]++;
                count+=2;
            }
        }
        cout << count << endl;
    }
    return 0;
}



