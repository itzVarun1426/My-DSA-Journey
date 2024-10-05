#include<iostream>
using namespace std;

int main(){
    //to swap two input numbers
    int a ;
    int b ;
    int c ;
    cout <<"Enter the value of a :";
    cin >>a;

    cout <<"Enter the value of b :";
    cin >>b;
    
    c=a;
    cout<<"c==" <<c<<endl;
    a=b;
    b=c;
    
    cout<< "The values are : "<<endl;
    cout <<"a==" <<a <<endl;
    cout<<"b==" <<b <<endl;
    
}