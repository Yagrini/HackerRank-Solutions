#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;


void solvee(int N , queue<int> q)
{
    vector<int> v(N+1);
    for(int i=0;i<=N;i++) v[i]=10000;
    v[0]=0;
    v[1]=1;
    v[2]=2;
    v[3]=3;
    for(int i=2 ; i<=N ; i++){
        v[i] = min(v[i] , v[i-1]+1);
        for(int j=2 ; j<=i ; j++){
            if(i*j>N) break;
            v[i*j] = min(v[i*j] , v[i]+1);
        }
    }
    while(!q.empty()){
            cout << v[q.front()] << endl;
        q.pop();
    }
}

int main() {
    int Q , N , maxi = 0;
    cin >> Q;
    queue<int> myqueue;
    while(Q--)
    {
        cin >> N;
        myqueue.push(N);
        maxi = max(maxi,N);
    }
    solvee(maxi , myqueue);
    return 0;
}
