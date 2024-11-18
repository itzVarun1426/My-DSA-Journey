#include<vector>
#include<iostream>
using namespace std;

void insertionSort(vector <int> &vec){
    int n = vec.size();
    for (int i = 1; i < n; i++)
    {
        int curr_Ele = vec[i];
        int j = i-1;
        while (j>=0 && vec[j]>curr_Ele)
        {
            vec[j+1]=vec[j];
            j--;   
        }
        vec[j+1]=curr_Ele;       
    }
    return ;
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    cout<<"Enter the elements in array: ";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    insertionSort(v);
    cout<<"The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
    

    return 0;
}