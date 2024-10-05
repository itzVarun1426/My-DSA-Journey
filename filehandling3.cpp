// to read the numbers from user and print in file
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // get numbers from user
    vector<int> num(5);
    for (int i = 0; i < 5; i++) cin >> num[i];
    // to open file
    ofstream fout;
    fout.open("file1.txt");
    // to write numbers in file
    fout<<"The num list before sorting : \n"; 
    for (int i = 0; i < 5; i++) fout << num[i]<<" ";
    sort(num.begin(), num.end());
    fout<<"The num list after sorting : \n";
    for (int i = 0; i < 5; i++) fout << num[i]<<" ";

    fout.close(); 
    return 0;
}