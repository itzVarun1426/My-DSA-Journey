#include<iostream>
using namespace std;

class animal{
    public:
    void dog(){
        cout<<"Dog is a pet animal"<<endl;
    }

};
class notanimal:public animal{
    public:
    void dog(){
        cout<<"Dog is not a pet animal"<<endl;
    }
};
int main(){
    animal* obj;
    notanimal obj2;
    obj = &obj2;
    obj->dog();
    return 0;
}