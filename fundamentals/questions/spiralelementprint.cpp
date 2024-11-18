// print the element of matrix in spiral form
#include <iostream>
#include <vector>
using namespace std;
void printmatrix(vector<vector<int>> &matrix)
{
    int left = 0;
    int right = matrix[0].size() - 1;
    int top = 0;
    int bottom = matrix.size() - 1;

    int direction = 0;
    while (top <= bottom && left <= right)
    {
        if (direction == 0)
        {
            for (int col = left; col <= right; col++)
            {
                cout << matrix[top][col] << "  ";
            }
            top++;
        }
        else if (direction == 1)
        {
            for (int row = top; row <= bottom; row++)
            {
                cout << matrix[row][right] << "  ";
            }
            right--;
        }
        else if (direction == 2)
        {
            for (int col = right; col >= left; col--)
            {
                cout << matrix[bottom][col] << "  ";
            }
            bottom--;
        }
        else
        {
            for (int row = bottom; row >= top; row--)
            {
                cout << matrix[row][left] << "  ";
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
    return;
}
int main()
{
    int n, m;
    cout << "Enter the number of row and column: ";
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    cout << "Enter the elements in matrix : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    printmatrix(matrix);
    return 0;
}