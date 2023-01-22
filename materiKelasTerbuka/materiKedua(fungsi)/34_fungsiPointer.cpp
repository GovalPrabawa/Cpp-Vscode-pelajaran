#include <iostream>

using namespace std;

void fungsi(int *);
void kuadrat(int *);
// void variabelC(int *);

int main()
{
    int a = 5;
    int c = 10;
    cout << " address a " << &a << endl;
    cout << "   nilai a " << a << endl;
    fungsi(&a); // fungsi dgn input pointer
    kuadrat(&a);

    cout << "Nilai a" << a << endl;

    // cout << "aajkij: " << &c << endl;
    // variabelC(&c);

    cin.get();
    return 0;
}

void fungsi(int *b)
{
    cout << " address b " << b << endl;
    cout << "   nilai b " << *b << endl; // dereferencing
}

void kuadrat(int *valPtr)
{
    *valPtr = (*valPtr) * (*valPtr);
}

// void variabelC(int *c)
// {
//     cout << "nilai pointer c: " << *c << endl;
// }