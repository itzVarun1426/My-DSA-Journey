// sort the given array consisting of only 0,1

#include <iostream>
#include <vector>
using namespace std;

// void sortarray(vector<int>  &v)
// {
//     int noof0 = 0;
//     for(int ele:v)
//     {
//         if (ele== 0)
//         {
//             noof0++;
//         }
//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (i<noof0)
//         {
//             v[i]=0;
//         }
//         else
//         {
//             v[i]=1;
//         }
//     }
// }
void sortarray(vector<int> &v)
{
    int leftptr = 0;
    int rightptr = v.size() - 1;

    while (leftptr < rightptr)
    {
        if (v[leftptr] == 1 && v[rightptr] == 0)
        {
            v[leftptr++] = 0;
            v[rightptr--] = 1;
        }
        if (v[leftptr] == 0)
        {
            leftptr++;
        }
        if (v[rightptr] == 1)
        {
            rightptr--;
        }
    }
    return ;
}
int main()
{
    int n;
    cout << "enter the number of elements :";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cout << "enter the element" << endl;
        cin >> ele;
        v.push_back(ele);
    }
    sortarray(v);
    cout << "the sorted array is :" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << v[i] << "  ";
    }
    return 0;
}
