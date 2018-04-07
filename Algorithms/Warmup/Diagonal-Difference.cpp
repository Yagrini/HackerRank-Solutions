#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sumPrimaryDiagonal(vector< vector<int> > a, int n){
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum += a[i][i];
    }
    return sum;
}
int sumSecondaryDiagonal(vector< vector<int> > a, int n){
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum += a[i][n-i-1];
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    cout << abs(sumSecondaryDiagonal(a,n)-sumPrimaryDiagonal(a,n)) << endl;
    return 0;
}


