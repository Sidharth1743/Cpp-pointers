#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Working with pointers;
    int a;
    int *p;
    a = 10;
    p = &a;
    cout << "Value of a " << a << "\n";
    cout << "Address of p is " << p << "\n";
    *p = 23;
    cout << "Valude of a is " << a << "\n";
    cout << "Address of a is " << p << "\n"; // Address not changed

    // pointer arithmetic
    cout << "Address of a " << p << "\n";
    cout << "Size of int " << sizeof(int) << " Bytes\n";
    cout << "Address of a+1 " << p + 1 << "\n"; // increased by 4

    // why datatype is important for pointers
    int b = 1025;
    int *j;
    j = &b;
    cout << "Address of b is " << j << "\n";
    cout << "Value of b is " << *j << "\n";
    char *p0;
    p0 = (char *)j; // typecasting
    cout << "Size of char " << sizeof(char) << " Bytes\n";
    cout << "Address of p0 " << &p0 << "\n";             // very important : p0 as another address in which typecasting occurs there
    cout << "Address-void of p0 " << (void *)p0 << "\n"; // prints address of b
    cout << "Value of p0 " << *p0 << "\n";
}