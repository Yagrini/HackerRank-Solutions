#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> result;
void solve(vector<int> A,long begin, int N){
    if(begin<0) {
        result.push_back(-1);
        return;
    }
    if(N==A[begin]) {
        result.push_back(A[begin]);
        return;
    }
    if(N%A[begin]==0) {
        result.push_back(A[begin]);
        solve(A,begin,N/A[begin]);
    }
    else solve(A,begin-1,N);
}

int main() {
    /* Enter your code here. ead input from STDIN. Print output to STDOUT */
    int n , k ;
    cin >> n >> k;
    vector<int> A(k);
    for(int i=0 ; i<k ; i++) cin >> A[i];
    sort(A.begin(), A.end());
    solve(A, A.size()-1, n);
    if(result[result.size()-1]==-1) cout << -1 << endl;
    else{
        sort(result.begin(), result.end());
        int output = 1;
        cout << output << " ";
        for(int i=0 ; i<result.size() ; i++) {
            cout << output*result[i] << " ";
            output = output*result[i];
        }
    }
    return 0;
}







