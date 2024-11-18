//implementation of dequeue using circular array non circular array is not an efficient way to use in dequeue cause it will not handle edge cases
#include<iostream>
using namespace std;
class Dequeue{
    int front,rear,size;
    int *arr;
    public:
    Dequeue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;

    }
    bool IsEmpty(){
        return front == -1;

    }
    bool IsFull(){
        return (rear+1)%size==front;
    }
    void Push_Front(int x){
        if(IsEmpty()){
            front = rear = 0;
            arr[rear] = x;
            return;
        }
        else if(IsFull()){
            cout<<"Queue is full"<<endl;
            return;
        }
        else{
            front = (front-1+size)%size;
            arr[front]=x;
            return ;
        }
    }

    void Push_Back(int x){
        if(IsEmpty()){
            front = rear = 0;
            arr[rear] = x;
            return;
        }
        else if(IsFull()){
            cout<<"Queue is full"<<endl;
            return;
        }
        else{
            rear = (rear+1)%size;
            arr[rear]=x;
            return;
        }
    }
    void Pop_Front(){
        if(IsEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        else if(front == rear){
            front  = rear = -1;
        }
        else{
            front=(front+1)%size;
        }
    }
    void Pop_Back(){
        if(IsEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        else if(front == rear){
            front  = rear = -1;
            return;
        }
        else{
            rear=(rear-1+size)%size;
        }
    }
    int Start(){
        if(IsEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    int End(){
        if(IsEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[rear];
    }
    
};
int main(){
    Dequeue q(5);
    q.Push_Back(10);
    cout<<q.End();
    q.Pop_Back();
    cout<<q.End();
    q.Push_Front(20);
    cout<<q.Start();
    q.Pop_Front();
    cout<<q.Start();
    q.Push_Back(30);
    cout<<q.End();

    return 0;
} 