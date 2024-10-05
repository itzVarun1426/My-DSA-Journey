#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> num;
    ifstream fin;
    fin.open("file1.txt");
    int c;
    while(fin>>c){
    num.push_back(c);
    }
    fin.close();

    sort(num.begin(),num.end());
    ofstream fout;
    fout.open("file1.txt");
    fout<<" the sorted list is :\n";
    for(int i=0 ; i<num.size() ;i++)fout<<num[i]<<" ";
    fout.close();
    return 0;

}