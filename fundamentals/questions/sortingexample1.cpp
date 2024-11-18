// Given an integer array arr, move all 0's to the end of it whilemaintaining the relative order of the non-zero elements.Note that you must do this in-place without making a copy of thearray.
#include <vector>
#include <iostream>
using namespace std;
void sorting(vector<int> &v)
{
    // int n = v.size();
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (v[i] == 0 && v[j] > 0)
    //         {
    //             swap(v[i], v[j]);
    //             break;
    //         }
    //     }
    // }
    // return;

    int n = v.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int j = 0;
        bool flag = false;
        while (j != i)
        {
            if (v[j] == 0 && v[j + 1] != 0)
            {
                swap(v[j], v[j + 1]);
                flag = true;
            }
            j++;
        }
        if (!flag)
            break;
    }
    return;
};
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the number of elements in array : " << endl;
    cin >> n;
    cout << "Enter the elements in array : " << endl;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    cout << "\nBefore sorting :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    sorting(v);
    cout << "\nAfter sorting array :" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}