#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n ,q , a , b;
    char c;
    vector<int> Q;
    cin >> n >> q;
    vector<int> parents(n+1);
    vector<int> sizes(n+1);
    for(int i=1 ; i<=n ;i++){
        parents[i] = i;
        sizes[i] = 1;
    }
    for(int i=1; i<=q ; i++){
        cin >> c ;
        if(c=='Q') {
            cin >> a ;
            int parentA = parents[a];
            while(parents[parentA] != parentA){
                parentA = parents[parentA];
            }
            cout << sizes[parentA] << endl;
        }
        else{
            cin >> a >> b;
            int parentA = parents[a];
            int parentB = parents[b];
            while(parents[parentA] != parentA){
                parentA = parents[parentA];
            }
            while(parents[parentB] != parentB){
                parentB = parents[parentB];
            }
            if(parentA != parentB){
                if(sizes[parentA] >= sizes[parentB]){
                    sizes[parentA] += sizes[parentB];
                    //sizes[parentB] = 0;
                    parents[parentB] = parentA;
                }
                else{
                    sizes[parentB] += sizes[parentA];
                    //sizes[parentA] = 0;
                    parents[parentA] = parentB;
                }
            }
        }
    }
    return 0;
}


