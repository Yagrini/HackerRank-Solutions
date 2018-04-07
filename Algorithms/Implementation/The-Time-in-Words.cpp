#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool pairCompare(const pair<int, int>& i ,const pair<int, int>& j){
    return i.first<j.first;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<string> numbers = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three",
        "twenty four",
        "twenty five",
        "twenty six",
        "twenty seven",
        "twenty eight",
        "twenty nine"
    };
    int h , m;
    cin >> h >> m;
    if(m==0) cout << numbers[h] << " o' clock" << endl;
    else if(m==1) cout << numbers[m] << " minute past " << numbers[h] << endl;
    else if(m<15) cout << numbers[m] << " minutes past " << numbers[h] << endl;
    else if(m==15) cout << "quarter past " << numbers[h] << endl;
    else if(m<30) cout << numbers[m] << " minutes past " << numbers[h] << endl;
    else if(m==30) cout << "half past " << numbers[h] << endl;
    else if(m<45) cout << numbers[60-m] << " minutes to " << numbers[h+1] << endl;
    else if(m==45) cout << "quarter to " << numbers[h+1] << endl;
    else if(m<59) cout << numbers[60-m] << " minutes to " << numbers[h+1] << endl;
    else cout << numbers[60-m] << " minute to " << numbers[h+1] << endl;
    return 0;
}




