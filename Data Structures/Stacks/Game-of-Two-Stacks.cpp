#include <cmath> 
#include <cstdio> 
#include <vector> 
#include <iostream> 
#include <stack> 
#include <algorithm> 
using namespace std; 


std::stack<long> reverseStack(std::stack<long> stack)
{
    std::stack<long> res;
    while(!stack.empty())
    {
        res.push(stack.top());
        stack.pop();
    }
    return res;
}

void solve(std::stack<long> a,std::stack<long> b,long x)
{
   int counter=0;
   int score=0;
   stack<long> removedA;
   stack<long> removedB;
   while(!a.empty() && score+a.top()<=x)
   {
       score+=a.top();
       removedA.push(a.top());
       a.pop();
       counter++;
   }
   int am = counter;
   int bm = 0;
   while(!b.empty())
   {
       score+=b.top();
       removedB.push(b.top());
       b.pop();
       bm++;
       while(score>x && !removedA.empty())
       {
           score-=removedA.top();
           a.push(removedA.top());
           removedA.pop();
           am--;
       }
       if(score<=x && counter<am+bm)
       {
           counter = am+bm;
       }
   }
   cout << counter << endl; 
}

int main() 
{ 
    int G;
    cin >> G;

    while(G--)
    {
        int n,m,x;
        int tmp;
        cin >> n >> m >> x;
        stack<long> a,b;
        while(n--){cin >> tmp;a.push(tmp);}
        while(m--){cin >> tmp;b.push(tmp);}
        a=reverseStack(a);
        b=reverseStack(b);
        solve(a,b,x);
    }
    return 0;
}
