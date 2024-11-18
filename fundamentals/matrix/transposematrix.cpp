#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout <<"Enter the number of element "<<endl;
    cin >> n >> m;
    int a[n][m];

    cout <<"Enter the element in matrix: "<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "the matrix is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int b[m][n];
    cout << "the transpose of the given matrix is : " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];
        }
    }
    cout<<"the transpose matrix is : " <<endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}