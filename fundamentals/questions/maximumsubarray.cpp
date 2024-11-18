#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> array = {-1, 2, 3, 3, 4, 5, -1};
    // int start = 0;
    int end = 4;
    // int sum = 0;
    // int ptr = 0;

    // for (int i = 0; i < 7; i++)
    // {
    //     cout << array[i] << "  ";
    // }

    vector<int> summation(4);

    for (int i = 0; i <= array.size() - end; i++)
    {
        int sum = 0;
        for (int j = i; j < i + end; j++)
        {

            sum = sum + array[j];
        }
        cout << sum << endl;
        summation.push_back(sum);
    }
    // ptr++;
    cout << " maximum element :" << endl;

    int maximum = summation[0];
    for (int i = 0; i < summation.size(); i++)
    {
        if (summation[i] > maximum)
        {
            maximum = summation[i];
        }
    }
    cout << maximum;
    return 0;
}