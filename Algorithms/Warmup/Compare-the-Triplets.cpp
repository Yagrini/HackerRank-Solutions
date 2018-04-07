#include <bits/stdc++.h>

using namespace std;

void solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    int a = 0 , b = 0;
    if(a0>b0) a++;
    if(a1>b1) a++;
    if(a2>b2) a++;
    if(a0<b0) b++;
    if(a1<b1) b++;
    if(a2<b2) b++;
    cout << a << " " << b << endl;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    solve(a0, a1, a2, b0, b1, b2);

    return 0;
}


