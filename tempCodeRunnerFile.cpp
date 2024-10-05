// sort the given array in the sequence having evev number at first and odd number in the end
// #include <iostream>
// #include <vector>

// using namespace std;

// void sort(vector<int> &v)
// {

//     int leftptr = 0;
//     int rightptr = v.size() - 1;

//     while (leftptr < rightptr)
//     {
//         if (v[leftptr] % 2 == 1 && v[rightptr] % 2 == 0)
//         {
//             int temp = v[leftptr];
//             v[leftptr] = v[rightptr];
//             v[rightptr] = temp;
//             leftptr++;
//             rightptr--;
//         }
//         if (v[leftptr] % 2 == 0)
//         {
//             leftptr++;
//         }
//         if (v[rightptr] % 2 == 1)
//         {
//             rightptr--;
//         }
//     }
// }
//     int main()
//     {
//         int n;
//         vector<int> v;

//         cout << "Enter the elements: " << endl;
//         for (int i = 0; i < n; i++)
//         {
//             int ele;
//             cin >> ele;
//             v.push_back(ele);
//         }
//         sort(v);
//         cout << "The sorted array is : " << endl;
//         for (int i = 0; i < n; i++)
//         {
//             // cout << v[i] << "  ";
//         }

//         return 0;
//     }