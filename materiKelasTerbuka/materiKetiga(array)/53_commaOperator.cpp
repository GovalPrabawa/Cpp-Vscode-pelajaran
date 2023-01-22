#include <iostream>
#include <string>

using namespace std;

void printData(int val)
{
    cout << val << endl;
}
int main()
{
    // (ekspression, ekspression2)
    int a;
    int b;
    int c;

    // cara biasa
    // b = 1;
    // c = 2;
    // a = b + c;

    // comma operator
    a = (b = 12, printData(b), c = 2, printData(c), (b + c));

    cout << a << endl;

    cin.get();
    return 0;
}