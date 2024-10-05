#include<iostream>
using namespace std;
int main(){
    //print sum of first n number using for loop
    int n,i=1,sum=0;
    cout<<"Enter the number ";
    cin>>n;
    for( ; i<=n;i++){
        sum+=i;
        
    }
    cout<<"Sum is "<<sum;
    return 0;
    
}