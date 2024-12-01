//function templates
#include<iostream>
using namespace std;

template<class T1, class T2>
float avg(T1 a , T2 b){
    float result = (a+b)/2;
    return result;
}
int main(){
    printf("the average of the given values are : %.3f",avg(2,4.9));

    return 0;
}