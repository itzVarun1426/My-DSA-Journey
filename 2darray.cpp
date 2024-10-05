#include <iostream>
using namespace std;
int main()
{

    int n, m;
    cout << "Enter the numer of element :";
    cin >> n >> m;
    int a[n][m];

    for (int row = 0; row < n; row++)
    {
        for (int column = 0; column < m; column++)
        {
            cin >> a[row][column];
        }
    }
    cout << " the list of element is :";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}