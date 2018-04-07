#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double n , ai,  countpos = 0 , countneg = 0 , countzero = 0;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        cin >> ai;
        if(ai==0) countzero++;
        else if(ai<0) countneg++;
        else countpos++;
    }
    printf("%.6f\n",countpos/n);
    printf("%.6f\n",countneg/n);
    printf("%.6f\n",countzero/n);
    
    return 0;
}


