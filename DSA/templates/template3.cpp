// templates with default parameter
#include <iostream>
using namespace std;

template <class T1 = int, class T2 = char>
class trial
{
public:
    T1 a;
    T2 b;
    trial(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
    }
};
int main()
{
    trial<> t1(10, 'A'); // default parameter
    trial<int, float> t2(20, 1.6333); //user assigned parameter
    t1.display();
    return 0;
}