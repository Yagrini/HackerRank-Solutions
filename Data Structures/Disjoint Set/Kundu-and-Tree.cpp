#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int *parents;
int *sizes;


void init(int size)
{
    parents=new int[size+1];
    sizes=new int[size+1];
    for(int i=1;i<=size;i++)
    {
        parents[i]=i;
        sizes[i]=1;
    }
}


int find( int x ) {
    int r = x;
    while(parents[r]!=r)
        r = parents[r];
    
    return r;
}

void merge(int a,int b)
{
    int parentA = find(a);
    int parentB = find(b);
    if(parentA!=parentB)
    {
        if(sizes[parentA]>=sizes[parentB])
        {
            sizes[parentA]+= sizes[parentB];
            sizes[parentB] = 0;
            parents[parentB] = parentA;
        }
        else
        {
            sizes[parentB]+= sizes[parentA];
            sizes[parentA] = 0;
            parents[parentA] = parentB;
        }
    }
}

void func(long N)
{
    long long mod = 1000000007;
    long long res=(N*(N-1)*(N-2)/6);
    long long premier=0;
    long long deuxieme=0;
    long long ret=0;
    long long tmp;
    for(int i=1;i<=N;i++)
    {
        tmp = sizes[i];
        premier=deuxieme=0;
        if(sizes[i]>=3)
        {
            premier+=(long long)((tmp*(tmp-1)*(tmp-2))/6);
        }
        deuxieme=(long long)((tmp*(tmp-1)*(N-tmp))/2);
        ret+=premier+deuxieme;
    }
    res = res - ret;
    cout<< (res%mod) << endl;
}


int main() {
    int N;
    cin >> N;
    init(N);
    int b,g;
    char color;
    for(int i=0;i<N;i++)
    {
        cin >> b >> g >> color;
        if(color=='r'){continue;}
        merge(b,g);
    }
    func(N);
    
    
    return 0;
}
