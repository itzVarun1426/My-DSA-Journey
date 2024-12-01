#include<iostream>
using namespace std;
class A {
    public:
    A(){
        cout<<"a0";
    }
    A(string s){
        cout<<"a1";
    }
};
class B : public A{
    public:
    B(){
        cout<<"b0";
    }
    B(string s){
        cout<<"b1";
    }
};
class C :private A {
    public:
    C(){
        cout<<"c0";
    }
    C(string s){
        cout<<"11";
    }
};
int main(){
    B b1;
    C c1;
    return 0;
}