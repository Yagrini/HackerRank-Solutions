#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , q;
    cin >> q;
    while(q--){
        cin >> n;
        vector < vector<int> > matrix(2*n, vector<int>(2*n));
        for(int i=0;i<2*n;i++)
            for (int j=0;j<2*n;j++)
                cin >> matrix[i][j];
        
        long sum=0;
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++)
                sum+=max(matrix[i][j],max(matrix[i][2*n-j-1],max(matrix[2*n-i-1][2*n-j-1],matrix[2*n-i-1][j])));
        }
        
        cout << sum << endl;
    }
    return 0;
}
