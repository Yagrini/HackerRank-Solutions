#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<string> matrix(n);
    for(int i=0 ; i<n ; i++)  cin >> matrix[i];
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i==0 || j==0 || i==n-1 || j==n-1) cout << matrix[i][j];
            else if((matrix[i][j]>matrix[i][j-1]) && (matrix[i][j]>matrix[i][j+1]) && (matrix[i][j]>matrix[i+1][j]) && (matrix[i][j]>matrix[i-1][j]))
                cout << 'X';
            else cout << matrix[i][j];
        }cout << endl;
    }

    return 0;
}




