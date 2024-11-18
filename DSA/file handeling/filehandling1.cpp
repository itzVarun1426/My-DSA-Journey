//to write in file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //to open the file
    ofstream fout;
    fout.open("file1.txt");
    //to write in file
    fout<<"hello varun";
    fout.close();
    return 0;
}