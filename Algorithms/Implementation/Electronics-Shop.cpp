#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , m , s ;
    cin >> s >> n >> m;
    
    vector<int> keyboard(n);
    vector<int> usb(m);
    for(int i=0 ; i<n ; i++) cin  >> keyboard[i];
    for(int i=0 ; i<m ; i++) cin >> usb[i];
    sort(usb.begin(), usb.end());
    sort(keyboard.begin(), keyboard.end());
    if(keyboard[0]+usb[0]>s) cout << -1 << endl;
    else{
        int mini =  s-keyboard[0]-usb[0];
        for(int i=0 ; i<n ; i++){
            if(keyboard[i]+usb[0]>s) break;
            for(int j=0 ; j<m ; j++){
                if(keyboard[i]+usb[j]>s) break;
                else mini = min(s-keyboard[i]-usb[j], mini);
            }
        }
        cout << s-mini << endl;
    }
    return 0;
}



