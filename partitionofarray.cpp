#include <iostream>
#include <vector>
using namespace std;

// int prefixsum(vector<int> &v, int n)
// {
//     int prefixsum = 0;
//     for (int i = 1; i < n; i++)
//     {
//         int prefixsum = v[i] + v[i - 1];
//     }
//     return prefixsum;
// }
// int total(vector<int> &v)
// {
//     int total = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         total = v[i] + total;
//     }
//     return total;
// }
int suffixsum(int totalsum, int prefixsum)
{
    int suffixsum = totalsum - prefixsum;
}
int main()
{
    int n;
    int num;
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
    // int totalsum = total(v);
    int totalsum=0;
    for (int  i = 0; i < n; i++)
    {
        totalsum+=v[i];
    }
    
    cout<<"totalsum: "<<totalsum<<endl;
    int prefixsum=0;
    for (int i = 0; i < n; i++)
    {
        // if (2*prefixsum(v, i)==totalsum)
        // {
        //     cout<<"prefixsum",prefixsum(v, i);
        //     break;
        //     num=i;
        // }
        prefixsum=v[i]+prefixsum;
        if(prefixsum==totalsum*0.5){
            num=i;
            break;
        }

    }
    cout<<"num : "<<num<<endl;
    cout << "first array is : "<<endl;
    for (int i = 0; i <= num; i++)
    {
        cout<<v[i]<<"  ";
    }
    cout << "second array is :" <<endl;
    for (int i = num+1; i < n; i++)
    {
        cout<<v[i]<<"  ";
    }
    
    
    return 0;
}