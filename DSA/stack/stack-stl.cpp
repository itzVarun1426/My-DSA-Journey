#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.size();
    s.pop();
    cout<<s.top();
    cout<<s.empty();

    return 0;
}