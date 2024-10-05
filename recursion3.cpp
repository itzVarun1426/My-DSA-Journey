//given two numbers p and q find the value of p raised to q using recursive function
// #include<iostream>
// using namespace std;
// int pow(int p , int q){
//     if(q==0)return 1;
//     else return p*pow(p , q-1);

// }
// int main(){
//     int p , q;
//     cin>>p>>q;
//     cout<<pow(p  , q);


//     return 0;
// }


#include<iostream>
using namespace std;
int pow(int p , int q){
    if (q==1){
        return p;
    }
    else{
        if(q%2==0){
            int ans = pow(p , q/2); 
            return ans*ans;
        }
        else{
            int ans = pow (p , (q-1)/2);
            return p*ans*ans;
        }
    }
}

int main(){
    cout<<"The answer is : "<<pow(2 , 5);
    return 0;

}