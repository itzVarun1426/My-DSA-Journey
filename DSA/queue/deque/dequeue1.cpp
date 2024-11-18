//implementation of dequeue usig doubly linked list 
#include<iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node *next,*prev;
    Node(int val){
        data = val;
        next = prev = NULL;
    }
};
class Dequeue{
    Node *front,*rear;
    int size;
    public:
    Dequeue(){
        front = rear = NULL;
        size = 0;

    }
    void Push_Front(int n){
        if(front==NULL){
            front = rear = new Node(n);
        }
        else{
            Node *temp = front->prev = new Node(n);
            temp->next = front;
            front = temp;
        }
    }
    void Push_Back(int n){
        if(front == NULL){
            front = rear = new Node(n);
        }
        else{
            Node *temp = rear->next = new Node(n);
            temp->prev = rear;
            rear = temp;
        }
    }
    void Pop_Front(){
        if(front == NULL){
            cout<<"\nDequeue is empty"<<endl; 
        }
        else{
            Node *temp = front;
            front = front->next;
            delete temp;
            if(front){
                front->prev = NULL;
            }
            else{
                rear = NULL;
            }
        }
    }
    void Pop_Back(){
        if(front == NULL){
            cout<<"\nDequeue is empty"<<endl; 
            return;
        }
        else{
            Node *temp = rear;
            rear = rear->prev;
            delete temp;
            if(rear){
                rear->next = NULL;
            }
            else{
                front = NULL;
            }
        }
    }
    int Start(){
        if(front == NULL){
            cout<<"\nDequeue is empty"<<endl;
            return -1;
        }
        else{
            return front->data;
        }
    }
    int End(){
        if(front == NULL){
            cout<<"\nDequeue is empty"<<endl;
            return -1;
        }
        else{
            return rear->data;
        }
    }
};

int main(){
    return 0;
}