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
    cout << "Address of j is " << j << "\n"; // same as address of b
    cout << "Value of j is " << *j << "\n";
    char *p0;
    p0 = (char *)j; // typecasting
    cout << "Size of char " << sizeof(char) << " Bytes\n";
    cout << "Address of p0 " << &p0 << "\n";             // very important : p0 is another address in which typecasting occurs there
    cout << "Address-void of p0 " << (void *)p0 << "\n"; // prints address of b
    cout << "Value of p0 " << *p0 << "\n";               // 1 won't print repesents as ASCII
    // void pointers - generic pointer
    void *p1;
    p1 = j;
    cout << "address of p1 is " << p1 + 1 << "\n"; // gcc on linux defauls to 1 , so + 1 is added or else fails in microsoft compiler
}