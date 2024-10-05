// given a boolean 2d array where each row is sorted find the row with maximum 1s
#include <iostream>
#include <vector>

using namespace std;
int max1s(vector<vector<int>> vec)
{
    int maxonerow = -1;
    int maxones = INT8_MIN;
    int columns = vec[0].size();
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (vec[i][j] == 1)
            {
                int numberones = columns - j;
                if (numberones > maxones)
                {
                    maxones = numberones;
                    maxonerow = i;
                }
            }
        }
    }
    cout << "The maximum number of ones are : " << maxones << endl;
    cout << "The row with maximum ones is : " << maxonerow + 1;
}
int main()
{
    cout << "Enter the number of rows and columns : " << endl;
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m));

    cout << "Enter the elements of vector : " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }
    cout << " The entered vector is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << vec[i][j] << "  ";
        }
        cout << endl;
    }
    max1s(vec);
    return 0;
}