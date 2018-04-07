#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, n , a ,b;
    cin >> t;
    while(t--){
        cin >> n >> a >> b;
        vector<int> arr;
        if(a==b) arr.push_back((n-1)*a);
        else{
            for(int i=1 ; i<=n ; i++){
                arr.push_back(((n-i)*a)+((i-1)*b));
            }
        }
            sort(arr.begin(), arr.end());
            for(int i=0 ; i<arr.size() ;i++) cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}




