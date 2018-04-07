#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long solve(vector<int>& A , vector<int>& B , int maxi , int mini){
    long count = 0;
    if(maxi>mini) return 0;
    for(int i=maxi ; i<=mini ; i++){
        bool t = true;
        for(int j=0 ; j<A.size() && t; j++){
            if(i%A[j] != 0) t=false;
        }
        for(int j=0 ; j<B.size() && t; j++){
            if(B[j]%i != 0) t=false;
        }
        if(t) {
            count++;
        }
    }
    return count ;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , m , maxiA = 0, miniB=100;
    cin >> n >> m;
    vector<int> A(n) , B(m);
    for(int i=0 ; i<n ; i++){
        cin >> A[i];
        maxiA = max(A[i],maxiA);
    }
    for(int i=0 ; i<m ; i++){
        cin >> B[i];
        miniB = min(B[i],miniB);
    }
    cout << solve(A, B, maxiA, miniB) << endl;;
    return 0;
}



