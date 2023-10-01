#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *nxt;
    Node(int data){
        this->data=data;
        this->nxt=NULL;
    }
};
int main(){
    Node* node1=new Node(10);
    cout<<node1->data<<"   "<<node1->nxt<<endl;

    

    return 0;
}