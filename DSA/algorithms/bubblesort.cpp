#include<vector>
#include<iostream>

using namespace std;
void bubbleSort(vector <int>&v){
    int n = v.size();
    for (int i = 0; i < n-1; i++)
    {
        bool swapped = true;
        for (int j = 0; j < n-i-1; j++)
        {
            if(v[j] > v[j+1]){
                swapped = false;
                swap(v[j] , v[j+1]);
            }
        }
        if(swapped)break;
    }
    
}
int main(){
    int n;
    vector<int>v;
    cout<<"Enter the number of elements in array :"<<endl;
    cin>>n;

    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    bubbleSort(v);
    cout<<"The elements in array are : ";
    for (int i = 0; i < n; i++)
    {
        cout<<v[i];
    }
    
    return 0;
}