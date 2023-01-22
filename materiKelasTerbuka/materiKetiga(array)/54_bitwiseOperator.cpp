#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void printBinary(unsigned short val, string nama)
{
    cout << nama << " = " << bitset<8>(val) << endl;
}

int main()
{

    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    // bitwise AND
    cout << "& - Bitwise AND" << endl;
    c = a & b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c= " << c << endl;

    // bitwise OR
    cout << "\n| - Bitwise OR" << endl;
    c = a | b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c= " << c << endl;

    // bitwise XOR
    cout << "\n^ - Bitwise XOR" << endl;
    c = a ^ b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c= " << c << endl;

    // bitwise NOT
    cout << "\n~ - Bitwise NOT" << endl;
    c = ~a;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c= " << c << endl;

    // bitwise SHL
    cout << "\n<< - Bitwise Shl" << endl;
    c = a << 1;
    printBinary(a, "a");
    // printBinary(b, "b");
    printBinary(c, "c");
    cout << "c= " << c << endl;

    // bitwise SHR
    cout << "\n<< - Bitwise Shr" << endl;
    c = a >> 1;
    printBinary(a, "a");
    // printBinary(b, "b");
    printBinary(c, "c");
    cout << "c= " << c << endl;

    cin.get();
    return 0;
}

// bitwise operator
/*
    &   AND Bitwise AND
    |   Or Bitwise inclusive Or
    ^   XOR Bitwise exclusive OR
    ~   NOT
    <<  SHL Shift bits left
    >>  SHL Shift bits right

*/