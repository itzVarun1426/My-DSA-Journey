// given are two sorted ascending array and there size we need to create a new sorted array merging both arrays
#include <iostream>

using namespace std;

int main()
{
    int arr1[] = {1, 6, 7, 10};
    int arr2[] = {0, 1, 3, 8, 11, 12, 15, 18};
    int n = 4;
    int m = 8;

    int result[n + m];
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m)
    {

        if (arr1[i] <= arr2[j])
        {
            result[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            result[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (j < m)
    {
        result[k] = arr2[j];
        j++;
        k++;
    }
    while (i < n)
    {
        result[k] = arr1[i];
        i++;
        k++;
    }
    for (int i = 0; i < m + n; i++)
        cout << result[i] << "  ";

    return 0;
}