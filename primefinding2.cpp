#include <iostream>
using namespace std;
bool prime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    int n, m;
    cout << "Enter the first number : " << endl;
    cin >> n;
    cout << "Enter the last number : " << endl;
    cin >> m;
    for (int j = n; j < m; j++)
    {
        if (j == 1)
        {
            continue;
        }
        else if (prime(j) == true)
        {
            cout << j << " ";
        }
    }

    return 0;
}