#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int magicSquare[8][3][3] = {
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
    };
    
    vector<vector<int>> arr(3,vector<int>(3));
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];
    }
    int mini = 81;
    for (int k = 0; k < 8; k++) {
        int cost = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cost += abs( arr[i][j] - magicSquare[k][i][j] );
        }
        mini = min(mini , cost);
    }

    cout << mini << endl;
    return 0;
}



