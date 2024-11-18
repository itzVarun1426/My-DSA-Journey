#include<iostream>
using namespace std;

class human
{
    public:
    int age ;
    string name;

    void display()
    {
        cout<<name <<endl;
    }
};
class youtuber : public virtual human
{
    public:
    int subscriber;
};
class engineer : public virtual human
{
    public :
    int salary;
};
class teacher : public youtuber , public engineer
{
    public:
    int experience;
    teacher(string name , int age , int subscriber , int salary , int experience)
    {
        this->name = name;
        this->age = age;
        this->subscriber = subscriber;
        this->salary = salary;
        this->experience = experience;

    }

    void print()
    {
        cout<<name<<" "<<age <<" "<<subscriber<<" "<<salary<<" "<<experience<<endl;
    }
};

int main()
{
    teacher t1("varun " , 18 , 78 , 839494 , 4);
    t1.print();
    t1.display();
}