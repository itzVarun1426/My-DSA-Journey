#include<bits/stdc++.h>
using namespace std;

int main(){

    ofstream fout;
    fout.open("file1.txt");
    fout<<"Hello Varun \n";
    fout<<"Hello India \n";
    fout<<"Hello bharat \n";
    fout.close();

    ifstream fin;
    fin.open("file1.txt");
    string line;
    while(getline(fin , line )){
        cout<<line<<endl;

    }
    fout.close();


    return 0;
}