#include <iostream>
#include<string>
using namespace std;
class customer
{
    string name;
public:
    customer(string name)
    {
        this ->name=name;

        cout << "constructor   " <<name<< endl;
    }
    customer(){
        name="4";
        cout << "constructor   " <<name<< endl;
    }
    ~customer()
    {
        cout << "destructor  " <<name<< endl;
    }
};
int main()
{
    customer c1("1"), c2("2"),c3("3");
    customer *c4= new customer;
    delete c4;

    return 0;
}