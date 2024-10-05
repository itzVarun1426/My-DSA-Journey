//Given a vector arr[] sorted in increasing order of n size and an integer x, find the number of unique pairs that exist in the array whose absolute sum is exactly x.

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,2,2,2};
    int n = 4;
    int x = 4;
    int i = 0;
    int j = n - 1;
    int pairs=0;
    while (i < j)
    {
        if (arr[i] + arr[j] == x)
        {
            // we found a pair
            i++;
            j--;
            pairs++;
            
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
    cout<<"The number of target sum pairs are : "<<pairs;
    
    return 0;

}