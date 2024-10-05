#include<iostream>
using namespace std;
// the exception class looks like this we can create our own class
// class exception{
//     string msg;
//     public:
//     exception(string msg){
//         this->msg = msg;
//     }
//     string what (){
//         return msg;
//     }
// }
// class runtime_error : public exception{
//     public:
//     runtime_error(string msg) : exception(msg)
//     {}
// }
class customer{
    string name;
    int age;
    int balance;

    public: 
    customer(string name , int age , int balance){
        this->name = name;
        this->age = age;
        this->balance = balance;

    }
    void display(){
        cout<<name<<" "<<age<<" "<<balance<<endl;
    }
    void deposit(int amount){
        if(amount>0 ){
            balance+=amount;
            cout<<amount<< "rs is debited "<<endl;

        }
        else{

            throw runtime_error("the deposite must be greater than 0");
        }
    }
    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<amount<< " re is withdrawed from account"<<endl;
        }
        else if(amount<0){
            throw runtime_error("the withdraw must be greater than 0 ");
        }
        else{
            throw runtime_error(" the withdraw amount must be smaller than balance");
        }
    }   

};
int main(){
    customer c1("varun " , 18 , 100);
    try{

    c1.display();
    c1.deposit(-100);
    c1.withdraw(400);
    
    }
    catch(const runtime_error &e){
        cout<<" Exception occured : " <<e.what()<<endl;
    }
    return 0;
}