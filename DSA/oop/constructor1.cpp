#include<iostream>
#include<string>
using namespace std;

class customer{
    string name;
    int balance;
    int accnumber;
     
    public:
    //parameterized constructor
    customer(string name , int balance , int accnumber ){
        this->name = name; 
        this->balance = balance;
        this->accnumber = accnumber;

    }
    customer(int balance , int accnumber){
        name="varun";
        this->balance=balance;
        this->accnumber=accnumber;

    }
    //inline constructor
    // customer(string p, int q , int r):name(p),balance(q),accnumber(r)
    // {

    // }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"balance: "<<balance<<endl;
        cout<<"acc number : "<<accnumber<<endl;

    }


};
int main(){
    customer c1( "varun" , 3 , 15524);
    c1.display();

    customer c2(4847,1214);
    c2.display();

    return 0;
}
