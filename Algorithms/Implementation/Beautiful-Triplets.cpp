#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , d , count=0;
    cin >> n >> d;
    vector<int> arr(n);
    for(int i=0 ; i<n ; i++) cin >> arr[i];
    if(n<=2) cout << count << endl;
    else{
        for(int i=0 ; i<n ; i++){
            bool t = true;
            for(int j=i+1 ;t && j<n && arr[j]<=arr[i]+d ; j++){
                if(arr[j] == arr[i]+d){
                    for(int k=j+1 ; k<n && arr[k]<=arr[k]+d ; k++){
                        if(arr[k] == arr[j]+d) {
                            count++;
                            t= false;
                            break;
                        }
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}



