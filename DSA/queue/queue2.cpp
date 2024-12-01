//implementation of cirular queue using array;
#include<iostream>
using namespace std;
class Queue{
  int *arr;
  int front , rear , size;
  public:
    Queue(int n){
      arr = new int[n];
      front = -1;
      rear = -1;
      size = n;
    }
    bool isEmpty(){
      return front==-1;
    }
    bool isFull(){
      return (rear+1)%size==front;
    }
    void push(int n){
      if(isEmpty()){
        cout<<"\npushed "<<n<<"element"<<endl;
        front=rear = 0;
        arr[front] = n;
      }
      else if(isFull()){
        cout<<"\n-queue overflow-"<<endl;
        return ;
      }
      else{
        cout<<"\npushed "<<n<<"element"<<endl;
        rear = (rear+1)%size;
        arr[rear] = n;
      }

    }
    void pop(){
      if(front == -1){
        cout<<"\n-queue underflow-"<<endl;
        return;
      }
      else {
        if(front == rear){
        cout<<"\n poped "<<arr[front]<<"last element"<<endl;
          front = rear = -1;
        }
        else{
        cout<<"\n poped "<<arr[front]<<"element"<<endl;
          front = (front+1)%size;
        }
      }
    }

      int start(){
        if(isEmpty()){
          cout<<"\nthe queue is empty"<<endl;
          return -1;
        }
        else{
          cout<<"\n"<<arr[front]<<"is at stating of the queue";
          return arr[front];
        }
      }
    
};
int main(){
  Queue q(5);
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);
  q.pop();
  q.pop();
  q.pop();  
  q.pop();
  q.pop();
  q.pop();

  return 0;
}