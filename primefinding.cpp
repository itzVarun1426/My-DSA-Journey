#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the first number : " << endl;
    cin >> n;
    cout << "Enter the last number : " << endl;
    cin >> m;
    for (int k = n; k <= m; k++)
    {

        if (k == 0 || k == 1 || k == 2 || k == 3)
        {
            cout << k << " ";
        }
        else
        {
            bool isprime = true;
            for (int i = 2; i <= int(k / 2); i++)
            {
                if (k % i == 0)
                {
                    isprime = false;
                    break;
                }
            }
            if (isprime == true)
            {

                cout << k << " ";
            }
        }
    }
    return 0;
}