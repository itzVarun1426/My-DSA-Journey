// given the array of names of fruits sort it in lexicographical order using selection sort (alphabetical order)
#include<cstring>
#include <iostream>
using namespace std;
void sorting(char fruit[][60], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_Idx = i;
        for (int j = i+1; j < n; j++)
        {
            if (strcmp(fruit[min_Idx], fruit[j]) > 0)
            {
                min_Idx = j;
            }
        }
        if (min_Idx != i)
        {
            // swap(fruit[min_Idx], fruit[i]);
            char temp[60];
            strcpy(temp, fruit[min_Idx]);
            strcpy(fruit[min_Idx], fruit[i]);
            strcpy(fruit[i], temp);
        }
    }
}
int main()
{
    char fruit[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};
    int n = sizeof(fruit) / sizeof(fruit[0]);

    sorting(fruit, n);
    cout<<"After sorting it will be :\n";

    for (int i = 0; i < n; i++)
    {
        cout << fruit[i] << " ";
    }
    cout << endl;

    return 0;
}