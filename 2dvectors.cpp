// the syntax of 2d vector of size (n,m)
//  vector<vector<int >> vector-name(n,vector<int >(m)) ;
//  if size is unknown
// vector <int>v1={1,2}
// vector <int>v2={3,4,5}
// vector <int>v3={6,7,8,9}
//  vector<vector<int >> vector-name={ v1,v2,v3}
//  vector<vector<int >> vector-name={ {1,2}, {3,4},{5,6,7}}
// the vector with all values 0
//  vector<vector<int >> vector-name(n,vector<int >(m,0)) ;

// print a pascal triangle for n input

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pascelement(int n)
{
    vector<vector<int>> pascal(n);

    for (int i = 0; i < n; i++)
    {
        pascal[i].resize(i+1);
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
            {
                pascal[i][j] = 1;
            }
            else
            {
                pascal[i][j] = pascal[i - 1][j] + pascal[i - 1][j - 1];
            }
        }
    }
    return pascal;
}
int main()
{
    int n;
    cout << "enter the number of rows: " << endl;
    cin >> n;

    vector<vector<int>> pascaltriangle;
    pascaltriangle = pascelement(n);
    cout<<"pascal tringle is : "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < pascaltriangle[i].size(); j++)
        {
            cout << pascaltriangle[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}