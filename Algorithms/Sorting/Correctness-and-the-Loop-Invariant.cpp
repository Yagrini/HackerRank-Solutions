#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++) cin >> arr[i];
    for(int i=1 ; i<n ; i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int tmp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = tmp;
            j--;
        }
    }
    for(int i=0 ; i<n ; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}



