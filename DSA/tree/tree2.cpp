//binary tree creating and traversing 
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *left,*right;
    Node(int value):data(value),left(NULL),right(NULL){};
};
Node* BinaryTrie(){
    int x;
    cin>>x;
    if(x==-1)return NULL;
    Node*temp = new Node(x);
    cout<<"Enter the left node of"<<x<<": ";
    temp->left = BinaryTrie();
    cout<<"Enter the right node of"<<x<<": ";
    temp->right = BinaryTrie();
    return temp;
}
int main(){
    cout<<"Enter root of the trie: ";
    Node*root = BinaryTrie();
    
    return 0;
}