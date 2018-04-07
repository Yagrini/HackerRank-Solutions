#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

const int ALPHABET_SIZE=26;

typedef struct node
{
    struct node *children[ALPHABET_SIZE];
    bool isEndOfWord;
}node;

node* getNode(void)
{
    node *pNode =  new node;
    
    for (int i = 0; i < ALPHABET_SIZE; i++)
        pNode->children[i] = NULL;
    
    pNode->isEndOfWord=false;
    return pNode;
}


void add(node* root,string tmp)
{
    node* start = root;
    for(int i=0;i<tmp.length();i++)
    {
        int index = tmp[i]-'a';
        if(!start->children[index])
        {
            start->children[index]=getNode();
        }
        start = start->children[index];
    }
    start->isEndOfWord=true;
}



bool isBadSet(node* root,string tmp)
{
    node* start = root;
    for(int i=0;i<tmp.length();i++)
    {
        int index = tmp[i] - 'a';
        if(start->isEndOfWord){return true;}
        if(!start->children[index])
        {
            return false;
        }
        start = start->children[index];
    }
    if(start->isEndOfWord || start){return true;}
    return false;
}

int main() {
    node *root = getNode();
    int N;
    cin >> N;
    string tmp;
    while(N--)
    {
        cin >> tmp;
        if(isBadSet(root,tmp)){cout << "BAD SET" << endl << tmp << endl;return 0;}
        add(root,tmp);
    }
    
    cout << "GOOD SET" << endl;
    
    
    return 0;
}
