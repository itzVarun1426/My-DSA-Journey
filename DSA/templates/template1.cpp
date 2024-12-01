//class template with single parameter 
#include <iostream>
using namespace std;

template <class T>
class Vector {
    public:
    T *arr; // Pointer to array
    int size;
    
    Vector(int n) {
        size = n;
        arr = new T[n]; // Dynamically allocate memory
    }
    
    T dotProduct(Vector &v) {
        T sum = 0;
        for (int i = 0; i < size; i++) {
            sum += this->arr[i] * v.arr[i];
        }
        return sum;
    }

};

int main() {
    Vector<int> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;

    Vector<int> v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 5;
    v2.arr[2] = 6;

    cout << v1.dotProduct(v2) << endl;
    return 0;
}

