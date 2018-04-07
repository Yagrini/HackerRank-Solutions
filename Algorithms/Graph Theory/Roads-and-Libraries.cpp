#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q , n , m , clib , croad , a , b;
    cin >> q;
    while(q--){
        cin >> n >> m >> clib >> croad;
        vector<int> parents(n+1);
        vector<int> sizes(n+1);
        for(int i=1 ; i<=n ; i++){
            parents[i] = i;
            sizes[i] = 1;
        }
        if(m==0) cout << clib*n << endl;
        else{
            while(m--){
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
                        sizes[parentB] = 0;
                        parents[parentB] = parentA;
                    }
                    else{
                        sizes[parentB] += sizes[parentA];
                        sizes[parentA] = 0;
                        parents[parentA] = parentB;
                    }
                }
            }
            long sum = 0;
            for(int i=0 ; i<sizes.size() ; i++){
                if(sizes[i]==1){
                    sum += clib;
                }
                if(sizes[i]>=2){
                    long coast1 = croad*(sizes[i]-1) + clib;
                    long coast2 = sizes[i]*clib;
                    sum = sum + min(coast1,coast2);
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}
