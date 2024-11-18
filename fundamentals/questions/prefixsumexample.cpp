#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    vector<int> v;
    cout << "Enter the element : ";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout << "The prefix sum sorted array is";
    for (int i = 1; i < n; i++)
    {
        v[i] = v[i] + v[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] <<"  ";
    }
    return 0;
}