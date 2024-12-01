// this is sieve of Eratostenes 
// this is most optimized way to find out the number in between are prime or not
//print all prime number between N
#include<iostream>
#include<vector>
using namespace std;
void sieveOfEratostenes(vector<int>&prime , int n){

    for (int i =2;i<=n;i++)
    {
        if(prime[i]==1){
            for(int j= i*i;j<=n;j+=i)prime[j]=0;
        }
    }
     
}

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;


    vector<int>prime(n+1,1);
    sieveOfEratostenes(prime,n);
    for(int i = 0;i<n;i++){
        if(prime[i]==1)cout<<i<<" ";
    }


    return 0;
}