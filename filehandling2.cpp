//to read the file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //open the file
    ifstream fin;
    fin.open("file1.txt");
    //to read the file
    string line;
    char c;
    // fin>>c; this will not print the blank space 
    // c=fin.get();
    // while(fin>>c){
    while(!fin.eof()){
        cout<<c;
        c = fin.get();
        //fin>>c;//this will be not required if we use while(fin>>c)condition
    }
    fin.close();


    return 0; 
}