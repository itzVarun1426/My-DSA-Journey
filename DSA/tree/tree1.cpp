#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node*left ,*right;
    Node(int value){
        data = value;
        left = right = NULL;
    }
};
int main(){

    int x,first,second;
    cout<<"Enter the root element: "<<endl;
    cin>>x;
    queue<Node*>q;
    Node * root = new Node(x);
    q.push(root);
    

    //build the binary tree 
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        //left
        cout<<"Enter the left child : "<<endl;
        cin>>first;
        if(first!=-1){
            temp->left = new Node(first);
            q.push(temp->left);

        }
        //right
        cout<<"Enter the right child : "<<endl;
        cin>>second;
        if(second!=-1){
            temp->right = new Node(second);
            q.push(temp->right);
        }

    }
    return 0;
}