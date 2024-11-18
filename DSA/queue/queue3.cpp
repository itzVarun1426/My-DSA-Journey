//implementing queue using linked list 
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
class Queue{
    Node *front ,*rear;
    public:
    Queue(){
        front = rear = NULL;
    }
    bool isEmpty(){
        return front == NULL;
    }
    void push(int n){
        if(isEmpty()){
            front = rear = new Node(n);
            return ;

        }
        else{
            rear->next = new Node(n);
            rear = rear->next;
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
        }
        else{
            Node * temp = front ;
            front = front->next;
            delete temp;
        }
    }
    int start(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return front->data ;
        }

    }

};
int main(){
    
    return 0;
}
