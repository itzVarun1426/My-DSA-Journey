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
    int size;
    public:
    Queue(){
        front = rear = NULL;
        size = 0;
    }
    bool isEmpty(){
        return front == NULL;
    }
    void push(int n){
        if(isEmpty()){
            front = rear = new Node(n);
            size++;
            return ;

        }
        else{
            rear->next = new Node(n);
            rear = rear->next;
            size++;
        }
    }
    void pop(){
        if(isEmpty()){
            size--;
            cout<<"Queue is empty"<<endl;
        }
        else{
            size--;
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
