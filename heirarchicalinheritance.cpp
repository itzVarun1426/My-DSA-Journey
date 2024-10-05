#include<iostream>
#include<string>
using namespace std;
class human
{
    public:
    string name;
    int age;

    human(string n , int age)
    {
        this->name=n;
        this->age=age;
    }
    void display()
    {
        cout<<name<<" "<<age<<endl;
    }
};
class student: public human
{
    int roll_no , fees;
    public:
    student(string n , int age , int roll_no , int fees):human(n , age)
    {
        this->roll_no=roll_no;
        this->fees=fees;
    };
    void display()
    {
        cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
    }
};
class teacher : public human
{
    int salary;
    public:
    teacher(int salary , string name , int age)
    {
        this->salary=salary;
        this->name=name;
        this->age=age;
    }
    void display()
    {
        cout<<name<<" "<<age<<" "<<salary<<" ";
    }
};
int main()
{
    // student s1("varun " , 18 , 67 , 1999);
    // s1.display();
    teacher t1(10000 , "varun" , 18);
    t1.display();
    return 0;
}