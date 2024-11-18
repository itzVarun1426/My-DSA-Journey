#include<vector>
#include<iostream>
using namespace std;

void selectionSort(vector<int>&v){
    int n = v.size();
    for (int i = 0; i < n-1  ; i++)
    {
        int minIdx = i;
        for (int j = i+1; j < n; j++)
        {
            if (v[j]<v[minIdx])
            {
                minIdx = j;
            }
            if (minIdx!=i)swap(v[i] , v[minIdx]);
        }
        
    }
    
}
int main(){
    vector <int>v;
    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    cout<<"Enter the elements in array :";
    for (int i = 0; i < n; i++)
    {
        int num=0;
        cin>>num;
        v.push_back(num);
    }
    
    selectionSort(v);

    cout<<"Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    

    return 0;
}