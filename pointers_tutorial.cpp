#include <bits/stdc++.h>

using namespace std;

void Increment(int *p)
{
    *p = *p + 1;
}

void print(char *D)
{
    int i = 0;
    while (D[i] != '\0')
    {
        cout << *D;
        D++;
    }
    cout << "\n";
}

int ADD(int x, int y)
{
    int c = x + y;
    cout << "Address of x in function ADD" << &x << "\n"; // address is different
    return c;
}

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

    // pointers to pointers
    int d = 15;
    int *e = &d;
    *e = 13;
    int **f = &e;
    int ***g = &f;
    cout << "e " << e << "\n";
    cout << "d " << &d << "\n";
    cout << "*e " << *e << "\n";
    cout << "*f " << *f << "\n";
    cout << "f " << f << "\n";
    cout << "**f " << **f << "\n";
    cout << "**g " << **g << "\n";
    cout << "***g " << ***g << "\n";
    ***g = 130;
    cout << "d " << d << "\n";

    // Call by refernce - pointers function
    Increment(&d);
    cout << "Value of d after increment " << d << "\n"; // saves memory eventhough copies extra

    char C[4];
    C[0] = 'S';
    C[1] = 'A';
    C[2] = 'C';
    C[3] = 'h';
    cout << C << "\n";

    // character arrays and pointers
    char D[10] = "Sachiv";
    print(D);

    // pointers and multi dimensional arrays
    int J[3][2][2] = {
        {{2, 5}, {3, 7}},
        {{3, 4}, {5, 6}},
        {{7, 9}, {8, 2}}};
    cout << J << "\n"
         << *J << "\n"
         << J[0] << "\n"
         << &J[0][0] << "\n";
    cout << *(J[0][0] + 1) << "\n";

    int x = 4, y = 3;
    int z = ADD(x, y);
    cout << "address of x in function main " << &x << "\n"; // address is different
    cout << "Addition of a and b " << z;
}
