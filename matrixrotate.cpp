#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void matrix_rotate(vector<vector<int>> &vec)
{
    int n = vec.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            swap(vec[i][j], vec[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(vec[i].begin(), vec[i].end());
    }
    return;
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n));
    cout << "Enter the element of matrix : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
    cout << "The matrix is : \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    matrix_rotate(v);
    cout << "The rotated matrix is : \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}