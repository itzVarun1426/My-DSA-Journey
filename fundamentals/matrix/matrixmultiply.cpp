#include <iostream>
using namespace std;
int main()
{
    
    int n1, m1;
    cout << "Enter the value n1 and m1 respectively : "<<endl;
    cin >> n1 >> m1;
    int a[n1][m1];

    cout << "Enter the value in matrices respectively : "<<endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cout << "Enter the a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
    }

    cout << "Elements in array 1 are : "<<endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cout << a[i][j] ," ";
        }
        cout << endl;
    }
    //Matrix 2
    int n2, m2;
    cout << "Enter the value n1 and m1 respectively : "<<endl;
    cin >> n2 >> m2;
    int b[n2][m2];

    cout << "Enter the value in matrices respectively : "<<endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cout << "Enter the a[" << i << "][" << j << "] : ";
            cin >> b[i][j];
        }
    }

    cout << "Elements in array 2 are : "<<endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cout << b[i][j] ," ";
        }
        cout << endl;
    }
    int c[n1][m2];
    if(m1=!n2){
        cout<<"matrix multiplication is not possible";

    }
    else{
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                int value=0;
                for (int k = 0; k <n2 ; k++)
                {
                    value = value + a[i][k] * b[k][j];
                }
                c[i][j]=value;
            }   
        }
    }
    cout << "Elements in ans array are : "<<endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cout << c[i][j] ," ";
        }
        cout << endl;
    }
    

    return 0;
}