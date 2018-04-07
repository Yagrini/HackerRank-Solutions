#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int solve(int X,int N,int num){
    if(pow(num,N)<X)
        return solve(X,N,num+1)+solve(X-pow(num,N),N,num+1);
    else if(pow(num,N)==X)
        return 1;
    else
        return 0;
}

int main() {
    int X,N;
    cin >> X >> N;
    cout << solve(X,N,1);
    return 0;
}
