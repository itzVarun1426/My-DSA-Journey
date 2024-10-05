#include<iostream>
using namespace std;
void swap(int *n , int *m){
    int temp = *n;
    *n = *m;
    *m = temp;
}
int main(){
    int n=10;
    int m = 20;
    swap(&n , &m);
    cout<<n<<" "<<m<<endl;

    return 0;
}