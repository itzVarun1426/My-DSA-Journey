// you have given an sorted array of n size and a number you have to check whether is there is any pair in array having sum equal to n
#include <iostream>

using namespace std;

int main()
{
    // int arr[] = {1, 6, 7, 10};
    // int n = 4;
    // int num = 17;
    // bool pair = false;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] + arr[j] == num)
    //         {
    //             pair = true;
    //             break;
    //         }
    //     }
    // }
    // cout<<"array having pair is : "<<pair;

    // code to find if there is a pair with sum x
    int arr[] = {-2, -1, 0, 3, 6, 8, 11, 12};
    int n = 8;
    int i = 0;
    int x = 14;
    int j = n - 1;
    bool found = false;
    while (i < j)
    {
        if (arr[i] + arr[j] == x)
        {
            // we found a pair
            found = true;
            break;
        }
        else if (arr[i] + arr[j] < x)
        {
            // sum is less than x, increase the sum
            i++;
        }
        else
        {
            // summ is more than x, decrease the sum

            j--;
        }
    }
    if (found = true)
        cout << "YES";
    else
        cout << "NO";


    return 0;
}