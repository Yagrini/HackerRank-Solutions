#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , k , pi, nbpage = 1 , count=0;
    cin >> n >> k ;
    for(int i=0 ; i<n ; i++){
        int tmp  = 0 , ptmp = 0;
        cin >> pi;
        while(pi>0){
            ptmp = tmp;
            tmp += (pi>=k) ? k : pi;
            pi -= k;
            if((nbpage>ptmp) && (nbpage<=tmp)) count++;
            nbpage++;
        }
    }
    cout << count << endl;

    return 0;
}



