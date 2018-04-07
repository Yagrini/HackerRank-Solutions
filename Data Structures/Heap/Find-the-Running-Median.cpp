#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int n ;
    double x , median;
    vector<double> minheap;
    vector<double> maxheap;
    cin >> n;
    cin >> x;
    minheap.push_back(x); push_heap(minheap.begin(), minheap.end(), greater<int>());
    median = x;
    printf("%.1f\n",median);
    for(int i=1 ; i<n ;i++){
        cin >> x ;
//        addToHeap(x,median,minheap,maxheap);
//        rearrange(minheap, maxheap);
//        median = getMedian(minheap, maxheap);
        if(x>median){
            minheap.push_back(x); push_heap(minheap.begin(), minheap.end(), greater<int>());
        }
        else{
            maxheap.push_back(x); push_heap(maxheap.begin(), maxheap.end());
        }
        if(minheap.size() > maxheap.size()+1){
            maxheap.push_back(minheap.front()); push_heap(maxheap.begin(), maxheap.end());
            pop_heap(minheap.begin(), minheap.end(), greater<int>());
            minheap.pop_back();
        } else if(maxheap.size() > minheap.size()+1) {
            minheap.push_back(maxheap.front()); push_heap(minheap.begin(), minheap.end(),greater<int>());
            pop_heap(maxheap.begin(), maxheap.end());
            maxheap.pop_back();
        }
        if(minheap.size()>maxheap.size()) median = minheap.front();
        else if(maxheap.size()>minheap.size()) median = maxheap.front();
        else median = (minheap.front()+maxheap.front())/2;
        printf("%.1f\n",median);
    }
    return 0;
}
