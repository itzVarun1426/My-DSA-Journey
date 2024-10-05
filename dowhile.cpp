#include<iostream>
using namespace std;

int main(){
    //print sum of n numbers using do-while loop
    int n,sum=0;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    
    do{
        sum+=n;
        n--;
    }
    while(n>=1);

    cout<<"the sum is :"<<sum;
    return 0;
    
}