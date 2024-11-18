#include<iostream>
using namespace std;
class student
{
    public:
    void studprint()
    {
        cout<<"student"<<endl;
    }
};
class male
{
    public:
    void maleprint()
    {
        cout<<"male"<<endl;
    }
};
class female
{
    public:
    void femaleprint()
    {
        cout<<"female"<<endl;
    }
};
class boy : public student , public male
{
    public:
    void boyprint()
    {
        cout<<"boy"<<endl;
        maleprint();
        studprint();
    }
};
class girl : public student , public female
{
    public:
    void girlprint()
    {
        cout<<"girl"<<endl;
        femaleprint();
        studprint();
    }
};


int main()
{
    boy b;
    b.boyprint();
    b.maleprint();
    b.studprint();

    girl g;
    g.girlprint(); 
    g.femaleprint();
    g.studprint();

}