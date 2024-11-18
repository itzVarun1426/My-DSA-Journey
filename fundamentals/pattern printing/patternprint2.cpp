#include<iostream>
using namespace std;
int main(){
    int n = 5;
    //      *
    //     **
    //    ***
    //   ****
    //  *****

    // for (int i = 1; i <= n; i++)
    // {
        
    //     for(int j = 1;j<=n-i;j++)cout<<" ";
    //     for(int j = 1;j<=i;j++)cout<<"*";
    //     cout<<endl;
    // }


    //     A   
    //    AB   
    //   ABC   
    //  ABCD   
    // ABCDE   

    for (int i = 1; i <= n; i++)
    {
        for(int j = 1;j<=n-i;j++)cout<<" ";
        for(char x = 'A';x<='A'+(i-1);x++)cout<<x;
        cout<<endl;
    }
    
    return 0;
}