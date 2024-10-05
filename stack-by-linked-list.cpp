#include<iostream>
//implementing stack using linked list
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;

    }
};
class Stack{
    Node *Top;
    int size;
    public:
        Stack(){
            Top = NULL;
            size = 0;
        }
        void Push(int value){
            Node *temp = new Node(value);
            if(temp == NULL){
                cout<<"\nStack Overflow";
                return;
            }
            temp->next= Top ;
            Top = temp;
            size++;
            cout<<"Pushed element : "<<value<<endl;
        }
        void Pop(){
            if(Top == NULL){
                cout<<"Stack is empty"<<endl;
                return ;
            }
            else{
                Node *temp = Top ;
                cout<<"popped value: "<<temp->data<<endl;
                Top = Top->next;
                delete temp;
                size--;
            }
        }
        int Peek(){
            if(Top == NULL){
                cout<<"Stack is empty"<<endl;
                return -1;
            }
            else{
                return Top->data;
            }
        }
        int Size(){
            return size;
        }
        bool IsEmpty(){
            return !size;
        }

};
int main(){
    Stack s;
    s.Push(10);
    cout<<s.Size()<<endl;
    s.Push(20);
    cout<<s.Size()<<endl;
    s.Push(30);
    cout<<s.Size()<<endl;
    s.Pop();
    cout<<s.Size()<<endl;
    // s.Pop();
    // cout<<s.Size()<<endl;
    // cout<<"the peek value is : "<<s.Peek()<<endl;
    // s.Pop();
    // cout<<s.Size()<<endl;
    // s.Pop();
    // cout<<s.Size()<<endl;
    // s.Pop();
    // cout<<s.Size()<<endl;
    // s.Pop();
    // cout<<s.Size()<<endl;
    cout<<s.IsEmpty()<<endl;
    s.Pop();
    s.Pop();
    s.Pop();
    s.Pop();
    s.Pop();
    cout<<s.IsEmpty()<<endl; 
    return 0;
}