#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long n , p , a , b;
    cin >> n >> p;
    if(n==1) cout << 0 << endl;
    else{
        vector<int> parents(n);
        vector<int> sizes(n);
        for(int i=0 ; i<n ;i++){
            parents[i] = i;
            sizes[i] = 1;
        }
        for(int i=0; i<p ; i++){
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
        long  count = 0;
        for(int i=0 ; i<sizes.size() ; i++){
            if(sizes[i]>=2){
                long  p = (sizes[i]*(sizes[i]-1));
                count = count + p;
            }
        }
        long  p = (n*(n-1));
        count = (p - count)/2 ;
        cout << count << endl;
    }
    return 0;
}



