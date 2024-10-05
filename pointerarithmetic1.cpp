#include<iostream>
using namespace std; 
int main(){
    int a = 9;
    double aa = 9.6;
    int *ptra= &a;
    double *ptrd= &aa;
    cout<<" the size of int is " <<sizeof(a)<<endl;
    cout<<" the size of double is " <<sizeof(aa)<<endl;

    cout <<ptra<<" "<<(ptra+1)<<endl;
    cout <<ptrd<<" "<<(ptrd+1)<<endl;

    return 0;
}