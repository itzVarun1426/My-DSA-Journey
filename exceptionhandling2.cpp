#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    try
    {
    if(b==0){
        throw 10;
    }
        int c = a / b;
    }
    catch(int e){
        cout<< " Error : "<<e<<endl;
    }

    return 0;
}