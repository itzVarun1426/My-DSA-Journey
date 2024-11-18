#include<iostream>
using namespace std;
int main(){
    int n = 5;

    // //right handed triangle
    // // *
    // // **
    // // ***
    // // ****
    // // *****

    // for(int i = 0;i<=n;i++){
    //     for(int j = 0;j<i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // //ascending number pattern
    // // 1
    // // 12 
    // // 123
    // // 1234
    // // 12345

    // for(int i = 0;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    // //reverse number pattern
    // // 1
    // // 21
    // // 321
    // // 4321
    // // 54321.


    // for (int i = 1; i <= n; i++)
    // {
    //     for(int j = i;j>=1;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // //alphabet pattern 
    // // a
    // // bb
    // // ccc
    // // dddd
    // // eeeee

    // for (int i = 1; i <= n; i++)
    // {
    //     char x = 'a' +( i-1);
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<x;    
    //     }
    //     cout<<endl;
        
    // }
    

    // star pattern
    // *****
    // ****
    // ***
    // **
    // *
    
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1;j<=n-(i-1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    return 0;
}