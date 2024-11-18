#include<iostream>
using namespace std;
void process(int *arr , int n){
    for (int i = 0; i < n; i++)
    {
        cout<<*(arr + i)<<" ";
    }
    
}
int main(){
    int arr[]={2,3};
    int n = 2; 
    int (*ptr)[2]=&arr;
    cout<<*ptr<<" "<<endl;
    cout<<&arr[0];
    // cout<<ptr<<" "<<arr<<" "<<*ptr<<" " <<*arr<<endl;//array name holds the address of the first index of array
    // //dereference is also possible
    // cout<<*(arr + 0)<<" "<<*(arr + 1)<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<*(arr + i)<<" ";
    // }
    process(arr , n);
    return 0;
     
}