#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << "size of int " << sizeof(a) << " bytes" << endl;

    float b;
    cout << "size of float " << sizeof(b) << " bytes" << endl;

    char m;
    cout << "size of char " << sizeof(m) << " bytes" << endl;

    bool n;
    cout << "size of bool " << sizeof(n) << " bytes" << endl;

    short int as;
    cout << "size of short int " << sizeof(as) << " bytes" << endl;
    long int al;
    cout << "size of long int " << sizeof(al) << " bytes" << endl;
}