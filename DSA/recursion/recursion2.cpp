// given an integer find out the sum of its digits using recursion
#include <iostream>
using namespace std;
int sum(int n)
{
    if (n >= 0 && n <= 9)
    {
        return n;
    };
    return (n % 10) + sum(n / 10);
}
int main()
{
    cout << "Enter the number to find the sum of digits: ";
    int n;
    cin >> n;

    cout << "The sum of the digits of the numbers : " << sum(n);
    return 0;
}
//time and space complexivity is O(digits)