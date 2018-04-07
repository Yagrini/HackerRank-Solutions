#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
bool pairCompare(const pair<pair<int, int>, int>& i, const pair<pair<int, int>, int>& j) {
    if(i.second<j.second) return true;
    else if(i.second>j.second) return false;
    else if ((i.second+i.first.first+i.first.second) < (j.second+j.first.first+j.first.second)) return true;
    return false;
}
int parents[3001];
void init(){
    for(int i=1 ; i<3001 ; i++){
        parents[i] = i;
    }
}
int find(int x){
    while(x!=parents[x]) x=parents[x];
    return x;
}
void merge(int x , int y){
    int parentsX = find(x);
    int parentsY = find(y);
    parents[parentsX] = parentsY;
}
long kruskal(vector<pair<pair<int, int>, int>> graph, int m){
    long mincost = 0;
    for(int i=0;i<m;i++){
        if(find(graph[i].first.first)!=find(graph[i].first.second)){
            mincost += graph[i].second;
            merge(graph[i].first.first,graph[i].first.second);
        }
    }
    return mincost;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , m , i;
    cin >> n >> m;
    vector<pair<pair<int, int>, int>> graph(m);
    for(i=0 ; i<m ; i++) cin >> graph[i].first.first >> graph[i].first.second >> graph[i].second;
    sort(graph.begin(), graph.end(), pairCompare);
    init();
    cout << kruskal(graph,m) << endl;
    return 0;
}



