#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int round(int x){
    if(x<38) return x;
    if((x+1)%5==0) return x+1;
    if((x+2)%5==0) return x+2;
    return x;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , grade;
    cin >> n ;
    while(n--){
        cin >> grade;
        cout << round(grade) << endl;
    }
    return 0;
}


