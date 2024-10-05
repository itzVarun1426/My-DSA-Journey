//use of the pointer as non declares parameter in function without returning them
#include<iostream>
using namespace std;
void indexreturn(string str , char ch , int *first , int *last){
    for (int i = 0; i < str.size(); i++)   
    {
        if (str[i]==ch)
        {
            *first = i;
            break;
        }
    
        
    }
    for (int i = str.size()-1; i >= 0; i--)   
    {
        
        if(str[i]==ch){
            *last = i;
            break;
        }
        
    }
    
}
int main(){
    string str="aaacdgja";
    int first , last;
    char ch;
    cout<<"Enter the character to find the index of : ";
    cin>>ch;
    cout<<"to print the first and last index of the "<<ch<<endl; 
    indexreturn(str , ch , &first , &last);
    cout<<"the first index of "<<ch<< " is "<<first<<" and last index is "<<last<<endl;

    return 0;
}