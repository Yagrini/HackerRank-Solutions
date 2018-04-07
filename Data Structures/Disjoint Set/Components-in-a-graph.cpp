#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
using namespace std;
int main()
{
    int n , a , b;
    cin >> n;
    vector<int> parents(2*n+1);
    vector<int> sizes(2*n+1);
    for(int i=1 ; i<=2*n ;i++){
        parents[i] = i;
        sizes[i] = 1;
    }
    for(int i=1; i<=n ; i++){
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
    sort(sizes.begin(), sizes.end());
    for(int i=0 ; i<sizes.size() ; i++){
        if(sizes[i]>=2){
            cout << sizes[i] << " " << sizes[sizes.size()-1] << endl;
            return 0;
        }
    }
    
    return 0;
}





