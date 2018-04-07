#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
long find(long n,const vector<long>& vec){
    for(int i=0; i<vec.size();i++){
        if(vec[i]==n) return i;
    }
    return vec.size();
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long n , m , k , c1 , c2 , r;
    vector<long> position;
    vector<pair<long,long>> cols;
    cin >> n >> m >> k;
    long long count = n*m;
    if(k==0) cout << count << endl;
    else{
        for(int i=0 ; i<k ; i++){
            cin >> r >> c1 >> c2;
            int rposition = find(r,position);
            if(rposition<position.size() && cols[rposition].second>=c1){
                cols[rposition].first = min(cols[rposition].first,c1);
                cols[rposition].second = max(cols[rposition].second,c2);
            } else{
                position.push_back(r);
                cols.push_back(make_pair(c1, c2));
            }
        }
        for(int i=0 ; i<cols.size() ;i++){
            count = count - (cols[i].second - cols[i].first +1) ;
        }
        cout << count << endl;
    }
    return 0;
}



