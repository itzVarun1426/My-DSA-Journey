#include<iostream>
using namespace std;
class InvalidError: public runtime_error{
    public:
    InvalidError(string msg) : runtime_error(msg){};

};
class NonNegativeError: public runtime_error{
    public:
    NonNegativeError(string msg) : runtime_error(msg){};
};
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

            throw NonNegativeError("negative the deposite must be greater than 0");
        }
    }
    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
            cout<<amount<< " re is withdrawed from account"<<endl;
        }
        else if(amount<0){
            throw NonNegativeError("negative the withdraw must be greater than 0 ");
        }
        else{
            throw InvalidError("balance the withdraw amount must be smaller than balance");
        }
    }   

};
int main(){
    customer c1("varun " , 18 , 100);
    try{

    c1.display();
    // c1.deposit(-100);
    c1.withdraw(400);
    
    }
    catch(const InvalidError &e){
        cout<<" Exception occured : " <<e.what()<<endl;
    }
    catch(const NonNegativeError &e){
        cout<<" Exception occured : " <<e.what()<<endl;
    }
    return 0;
}