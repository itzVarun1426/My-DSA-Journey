#include <iostream>
using namespace std;

struct Name {
    char first[50], mid[50], last[50];
};

struct Phone {
    char area[50], exch[50];
    char no[50];  // Changed to char array to handle large numbers as strings
};

class Rec {
    Name n;
    Phone p;

public:
    void reci();
    void disp();
};

void Rec::reci() {
    cout << "Enter First Name: ";
    cin >> n.first;
    cout << "Enter Mid Name: ";
    cin >> n.mid;
    cout << "Enter Last Name: ";
    cin >> n.last;
    cout << "Enter Area: ";
    cin >> p.area;
    cout << "Enter Exchange: ";
    cin >> p.exch;
    cout << "Enter No: ";
    cin >> p.no;
}

void Rec::disp() {
    cout << "\nFirst Name: " << n.first;
    cout << "\nMid Name: " << n.mid;
    cout << "\nLast Name: " << n.last;
    cout << "\nArea: " << p.area;
    cout << "\nExchange: " << p.exch;
    cout << "\nNo: " << p.no << endl;
}

int main() {  // Changed return type to int
    Rec t;
    t.reci();
    t.disp();
    return 0;  // Added return statement
}
