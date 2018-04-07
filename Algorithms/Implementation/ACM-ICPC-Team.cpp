#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int searchMax(vector<string>& s , int n , int  m){
    int maxi = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            int count = 0;
            for(int k=0 ; k<m ; k++){
                if(s[i][k]=='1' || s[j][k]=='1') count++;
            }
            maxi = max(maxi , count);
        }
    }
    return maxi;
}
int solve(vector<string>& s , int n , int  m,int maxi){
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            int count = 0;
            for(int k=0 ; k<m ; k++){
                if(s[i][k]=='1' || s[j][k]=='1') count++;
            }
            if(count==maxi) sum++;
        }
    }
    return sum;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , m;
    cin >> n >> m;
    vector<string> arr(n);
    for(int i=0 ; i<n ;i++) cin >> arr[i];
    int maxi =  searchMax(arr,n,m) ;
    int number  = solve(arr,n,m,maxi);
    cout << maxi << endl << number << endl;
    return 0;
}



