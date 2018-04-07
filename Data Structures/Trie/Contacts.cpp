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
    int count;
}node;

node* getNode(void)
{
    node *pNode =  new node;
    pNode->count = 0;

    for (int i = 0; i < ALPHABET_SIZE; i++)
        pNode->children[i] = NULL;

    return pNode;
}


void add(node* root,string tmp)
{
    node* start = root;
    start->count++;
    for(int i=0;i<tmp.length();i++)
    {
        int index = tmp[i]-'a';
        //cout << index << endl;    
        if(!start->children[index])
        {
            start->children[index]=getNode();
        }
        start = start->children[index];
        start->count++;
    }
}

int find(node* root,string tmp)
{
    node* start = root;
    for(int i=0;i<tmp.length();i++)
    {
        int index = tmp[i] - 'a';
        if(!start->children[index])
        {
            return 0;
        }
        start = start->children[index];
    }
    return start->count;
}

int main() {
    node *root = getNode();
    int N;
    cin >> N;
    string tmp;
    while(N--)
    {
        cin >> tmp;
        if(tmp=="add")
        {   
            cin >> tmp;
            add(root,tmp);
        }else{
            cin >> tmp;
            cout << find(root,tmp) << endl;
        }
    }
    return 0;
}



