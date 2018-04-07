#include <bits/stdc++.h>

using namespace std;

long aVeryBigSum(int n, vector <long> ar) {
    // Complete this function
    long sum = 0;
    while(n--){
        sum += ar[n];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<long> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    long result = aVeryBigSum(n, ar);
    cout << result << endl;
    return 0;
}


