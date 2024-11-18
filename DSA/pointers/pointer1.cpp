#include<iostream>
using namespace std;
int main(){
    int a=9;
    float b = 3.2;
    char c = 'k';
    string name = "arun";
    cout<<a<<" "<<b<<" "<<c<<" "<<name<<endl;
    cout<<&a<<" "<<&b<<" "<<&c<<" "<<&name<<endl;
    int *ptr1 = &a;
    float *ptr2 = &b;  
    char *ptr3 = &c;
    string *ptr4 = &name;
    cout<<ptr1<<" "<<ptr2<<" "<<ptr3<<" "<<ptr4<<endl;

    //dereference operator
    // int *ptr5 = &ptr1; 
    cout<<&ptr1<<endl;
    
    return 0;
}