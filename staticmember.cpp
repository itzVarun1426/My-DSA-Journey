#include <iostream>
#include <string>
using namespace std;
class customer
{
    string name;
    int balance, acc_num;
    static int total_customer;
    static int total_balance;

public:
    customer(string name, int balance, int acc_num)
    {
        this->name = name;
        this->balance = balance;
        this->acc_num = acc_num;
        total_balance += balance;
        total_customer++;
    }
    void display()
    {
        cout << name << " \n"
             << balance << " \n"
             << acc_num << " \n"
             << total_customer << " \n"
             << total_balance << endl;
    }
    void deposit(int amount)
    {
        if (amount <= balance)
        {
            total_balance+=amount;
            balance += amount;
        }
    }
    void withdrawal(int amount)
    {
        if (amount <= balance && amount > 0)
        {
            total_balance-=amount;
            balance -= amount;
        }
    }
};
int customer::total_customer = 0;
int customer::total_balance = 0;
int main()
{
    customer c1("Varun ", 10000, 121);
    c1.display();
    customer c2("Arun ", 20000, 122);
    c2.display();
    customer c3("Tarun ", 30000, 123);
    c3.display();

    return 0;
}