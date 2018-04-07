#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
    long n , x , k;
    vector<long> v;
    cin >> n ;
    while(n--){
        cin >> x ;
        if(x==1){
            cin >> k;
            v.push_back(k);
            long i = v.size();
            long tmp = k;
            while(i>=2 && tmp<v[i/2-1]){
                v[i-1] = v[i/2-1];
                i = i/2;
            }
            v[i-1] = tmp;
        }
        else if(x==2){
            cin >> k;
            bool t = false;
            long i = find(v.begin(), v.end(), k) - v.begin() + 1;
            long s = v.size();
            long tmp = v[i-1] = 9223372036854775807;
            long smallIndex;
            while(!t && 2*i<=s){
                if(2*i == s) smallIndex = s-1;
                else{
                    if(v[2*i -1]<= v[2*i]) smallIndex = 2*i -1;
                    else smallIndex = 2*i;
                }
                if(tmp > v[smallIndex]){
                    v[i-1] = v[smallIndex];
                    i = smallIndex + 1;
                }
                else t = true;
            }
            v.pop_back();
        }
        else cout << v[0] << endl;
    }
    
    return 0;
}
