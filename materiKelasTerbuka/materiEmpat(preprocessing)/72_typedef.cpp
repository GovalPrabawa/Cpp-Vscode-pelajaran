#include <iostream>

using namespace std;

int main()
{
    // type def adalah memberikan alias untuk type data
    typedef int I;
    typedef int iVektor2D[2];
    typedef unsigned long ulong;
    typedef double vektor[2];
    using numbers = double;

    I a = 10;
    iVektor2D b = {1, 2};
    ulong c = 61365176321;
    vektor d = {10.980, 15.123};
    numbers e = 18.94848457;

    cout << "nilai a: " << a << endl;
    cout << "nilai b: " << b[0] << " dan " << b[1] << endl;
    cout << "nilai c: " << c << endl;
    cout << "nilai d: " << d[0] << " dan " << d[1] << endl;
    cout << "nilai e: " << e << endl;
    cin.get();
    return 0;
}