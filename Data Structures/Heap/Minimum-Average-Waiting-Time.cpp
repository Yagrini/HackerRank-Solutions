#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
#include <functional>
#include <queue>

using namespace std;
struct Compare{
    bool operator() (const pair<long,long>&i, const pair<long,long>&j)
    {
        return i.second > j.second;
    }
};
bool compare(const pair<long,long>&i, const pair<long,long>&j)
{
    return i.first < j.first;
}

int main() {
    priority_queue<pair<long,long>, vector<pair<long, long>>,Compare> vv;
    
    int n;
    cin >> n;
    vector<pair<long,long>> v;
    for(int i=0 ; i<n ; i++){
        int t , l;
        cin >> t >> l;
        v.push_back(make_pair(t, l));
    }
    sort(v.begin(),v.end(),compare);
//    vv.push(make_pair(0,v[0].second));
    long long sum = 0 , wait = 0;
    for(int i=0 ; i<n ;){
        if(vv.empty()){
            wait = v[i].second + v[i].first;
            sum = sum + v[i].second;
            i++;
        }
        else{
            wait += vv.top().second;
            sum = sum + wait - v[vv.top().first].first;
            vv.pop();
        }
        while(i<n && v[i].first <= wait){
            vv.push(make_pair(i,v[i].second));
            i++;
        }
    }
    while(!vv.empty()){
        wait += vv.top().second;
        sum = sum + wait - v[vv.top().first].first;
        vv.pop();
    }
    cout << sum/n << endl;
    return 0;
}
