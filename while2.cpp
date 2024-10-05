#include<iostream>
using namespace std;
//print sum of first n numbers
int main(){

    int n;
    cout<<"Enter the number:";
    cin>>n;

    int i=1,sum=0;
    while(i<=n){
        sum+=i;
        i++;
    
    }
    cout<<"\n sum="<<sum;
    return 0;

}