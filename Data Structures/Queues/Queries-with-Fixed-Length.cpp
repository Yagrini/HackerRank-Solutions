#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
#include <deque>

using namespace std;


void solve(int* tab,int size,int D)
{
    std::deque<int>  Q(D);

    int i;
    for (i = 0; i < D; ++i)
    {
        while ( (!Q.empty()) && tab[i] >= tab[Q.back()])
            Q.pop_back();  // Remove from rear

        Q.push_back(i);
    }
    int mini = INT_MAX;
    for (i=D; i <size; ++i)
    {
        mini = min(mini,tab[Q.front()]);

        while ( (!Q.empty()) && Q.front() <= i - D)
            Q.pop_front();  // Remove from front of queue

        while ( (!Q.empty()) && tab[i] >= tab[Q.back()])
            Q.pop_back();

        Q.push_back(i);
       
    }
    mini = min(mini,tab[Q.front()]);
    cout << mini << endl;
}

int main() {
    int N,Q;
    cin >> N >> Q;
    int V =N;
    int seq[N];
    int D;
    int i=0;
    while(V--){cin >> seq[i];i++;}
    while(Q--)
    {
        cin >> D;
        solve(seq,N,D);
        //cout << " FOR D = " << D << endl;
    }
    return 0;
}
