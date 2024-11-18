#include <iostream>
#include <exception>
using namespace std;
int main()
{
    try
    {
        int *p = new int[1000000000];
        cout << "memory allocation successfull : " << endl;
        delete[] p;
    }
    catch (const exception e)
    // catch (const bad_alloc e)#exception is parent class and other are its child class

    {
        cout << " Exception occured : line 6 , " << e.what();
    }
    return 0;
}